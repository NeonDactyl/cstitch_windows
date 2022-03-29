#!/usr/bin/python

#
# Copyright 2011 Tom Klein.
#
# This program is free software: you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation, either version 3 of the License, or
# (at your option) any later version.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with this program.  If not, see <http://www.gnu.org/licenses/>.
#

# Create a .pro file if one doesn't exist; populate a .pro with some
# default configuration parameters (if they don't exist); add CONFIG
# parameters specified on the command line

import subprocess, sys, os, re, time

def insertString(inputString, searchRE, insertionRE, stringToInsert):
    """
    If <searchRE> is empty or doesn't match <inputString> then insert
    <stringToInsert> into <inputString> at the first match of
    <insertionRE> (if there is one).  Return a pair whose first
    coordinate is True if the string was inserted and False otherwise,
    and whose second coordinate is the "new" string.
    """
    if searchRE == '' or re.search(searchRE, inputString) == None:
        insertLocation = inputString.find(insertionRE)
        if insertLocation != -1:
            print("  Inserting '" + stringToInsert.replace("\n","") + "'...")
            inputString = (inputString[:insertLocation] + stringToInsert +
                           inputString[insertLocation:])
            return (True, inputString)
        else:
            print("\n\n!!     Couldn't find insert location: " + insertionRE + "\n\n")
            sys.exit(-1)
    else:
        #print "'" + insertString.replace("\n","") + "' already exists"
        return (False, inputString)

###############################################################################
# process command line args
###############################################################################
help = [arg for arg in sys.argv if arg.find('--help') != -1]
if help != []:
    print("""\n Usage: {0} [--help | config1 config2 ...]
         where config1, config2, ... will be added to the pro file as
         CONFIG += config1 config2 ...
         """.format(sys.argv[0]))
    sys.exit(0)
configArgs = " ".join(sys.argv[1:])

###############################################################################
# create .pro if necessary, then initialize it if necessary
###############################################################################
projectName = os.path.split(os.getcwd())[1] # current directory name
proFilename = projectName + '.pro'
print("")
try:
    projectFile = open(proFilename)
except:
    print("  Recreating project file...")
    #    subprocess.Popen(["qmake", "-project"])
    # block until qmake returns
    subprocess.call(["qmake", "-project"])
    projectFile = open(proFilename)

projectString = projectFile.read()
projectFile.close()

updateNeeded = False
# insert new project configuration in front of here
insertionPointRE = "\n# Input\nHEADERS"
# note that it's okay to repeat config lines/options, so we do that freely
if configArgs:
    addString = "CONFIG += " + configArgs + "\n"
    (configWriteNeeded, projectString) = insertString(projectString,
                                                      re.escape(addString),
                                                      insertionPointRE,
                                                      addString)
    updateNeeded = updateNeeded or configWriteNeeded

qtIncludes = "QT += xml widgets printsupport\n"
(xmlWriteNeeded, projectString) = insertString(projectString,
                                               re.escape(qtIncludes),
                                               insertionPointRE,
                                               qtIncludes)
updateNeeded = updateNeeded or xmlWriteNeeded

(iconWriteNeeded, projectString) = insertString(projectString,
                                                r'RC_FILE',
                                                insertionPointRE,
                                                'RC_FILE += cstitch.rc\n',)
updateNeeded = updateNeeded or iconWriteNeeded

if updateNeeded:
    projectFile = open(proFilename, 'w')
    projectFile.write(projectString)
    projectFile.close()
    print("  " + proFilename + " updated.")
else:
    print("  No updates required.")

print("")
