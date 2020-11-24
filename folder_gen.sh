#!/usr/bin/sh

# Get link
PROBLEM_LINK="${1:? Error: Give problem link}"
CC_CODE=${PROBLEM_LINK##*/}

# Create directory
DIR=CodeChef/Practice/Beginner/$CC_CODE
mkdir -p $DIR

## Create a cpp file for the solution
file=${CC_CODE,,}.cpp
touch $DIR/$file

# Create README file
READ_ME="## Problem link \n\n - $PROBLEM_LINK"
echo -e $READ_ME > $DIR/README.md
echo "Folder and file created successfully"