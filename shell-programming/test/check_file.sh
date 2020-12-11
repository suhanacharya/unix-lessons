#!/bin/bash
#check_file.sh;
if [ ! -e $1 ]
    then
        echo "file doesn't exist"
elif [ ! -r $1 ]
    then
        echo "File is not readable"
elif [ ! -w $1 ]
    then
        echo "File is not writable"
else
    echo "File is readable and writable"
fi
