x=5;
y=7;
z=10;

if [ $x -lt $y ]
    then 
        echo "$x less than $y"
fi


test $x -lt $y; echo "$?"

# echo test $x -gt $y;
# echo test $x -ge $z;
# echo test $x -le $z;
