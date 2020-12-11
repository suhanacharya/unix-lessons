#!/bin/bash
#cash.sh uses case to offer 5 items from menu

echo "Menu
    1. List of Files
    2. Processes of users
    3. Today's date
    4. Users of System
    5. Quit to unix
Enter your choice: "
read choice

case "$choice" in
    1) ls -l;;
    2) ps -f;;
    3) date;;
    4) who;;
    5) exit;;
    *) echo "Invalid option"
esac
