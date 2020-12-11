#!/bin/sh
#test2.sh

if test $# -eq 0 ; then
    echo "Value equal to 0" ;
elif test $# -gt 3 ; then
    echo "Value greater than 3" ;
else
    echo "Value not found" ;
fi