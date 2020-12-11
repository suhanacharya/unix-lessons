#!/bin/bash
#pattern_match.sh
if [ $# -eq 0 ]
    then
        echo "Usage: $0 pattern file" > /dev/tty
elif [ $# -eq 2 ]
    then
        grep "$1" $2 || echo "$1 not found in $2" > /dev/tty
else
    echo "You didn't enter 2 args" > /dev/tty
fi