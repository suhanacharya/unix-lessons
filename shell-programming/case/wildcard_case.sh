echo "Case using wildcards"
read choice

# *, ?, [] wildcards

case "$choice" in
    [yY][eE][sS]) echo "YES";;
    [nN][oO]) echo "NO";;
    *) echo "INVALID"
esac