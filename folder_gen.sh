#!/usr/bin/sh

# Get the contest code
function get_contest_code() {
    CONTEST_CODE=$(echo ${PROBLEM_LINK##*.com/} | grep -oE "^[^a-z\/]*")
    get_dir_name
}

# Get the dir name
function get_dir_name() {
    DIR=CodeChef/Contests/$CONTEST_NAME/$CONTEST_CODE/$CC_CODE
}


## Starts here
# Get the option
OPTION="${1:? Error: Give the option}"

# Get link
PROBLEM_LINK="${2:? Error: Give problem link}"
CC_CODE=${PROBLEM_LINK##*/}

# Option handling
case ${OPTION} in 
    -d)
    DIR=CodeChef/DataStructure/WarmUp/$CC_CODE
    ;;
    -p)
    DIR=CodeChef/Practice/Beginner/$CC_CODE
    ;;
    -dt)
    echo "Enter the DS topic:"
    read TOPIC
    DIR=CodeChef/DataStructure/Topics/$TOPIC/$CC_CODE
    ;;
    -cclc)
    # Long Challenge
    CONTEST_NAME="LongChallenge"
    get_contest_code
    ;;
    -ccco)
    # Cook-Off
    CONTEST_NAME="CookOff"
    get_contest_code
    ;;
    -cclt)
    # Lunch time
    CONTEST_NAME="LunchTime"
    get_contest_code
    ;;
    *)
    echo "${0}: usage: <option> <link>"
    exit 1
    ;;
esac

# Create directory
mkdir -p $DIR

## Create a cpp file for the solution
file=${CC_CODE,,}.cpp
initial_skel="#include<iostream>\n\nusing namespace std;\n\nint main(){\n}"
echo -e $initial_skel > $DIR/$file

# Create README file
READ_ME="## Problem link \n\n - $PROBLEM_LINK"
echo -e $READ_ME > $DIR/README.md

# Notify
echo "Folder and File created successfully"