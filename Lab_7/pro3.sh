echo "simple interest"
echo "enter values p for principal, r for rate ,t for time "
echo "enter p"
read p
echo "enter r"
read r
echo "enter t"
read t
echo "simple interest is"
s=` expr $p \* $r \* $t `
si=`echo $s / 100 | bc`
echo "$si"
