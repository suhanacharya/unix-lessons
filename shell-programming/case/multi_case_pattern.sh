echo "Do you wish to continue?(y/n) "
read choice

case "$choice" in
    y|Y) ;;
    n|N) exit 1;;
esac