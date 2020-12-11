#!/bin/bash

if [ $# -eq 0 ]
    then
        echo "Enter the string to be searched: "
        read pname
        if [ -z "$pname" ]
            then 
                echo "You havent entered string";
                exit 1
        fi
        echo "Enter the filename to be used: "
        read filename
        if [ ! -n "$filename" ]
            then
                echo "You have not entered the filename"
                exit 2
        fi
fi
