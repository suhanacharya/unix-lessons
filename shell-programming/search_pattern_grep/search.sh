#!/bin/sh
#search.sh searches argument in file.txt
if grep "$1" file.txt > /dev/null
    then
        echo "Pattern found - Job over"
    else
        echo "Pattern not found"
fi