echo to generate the table of any number
echo enter a number
read num
j=1
while [ $num -le 10 ]
do
res=` expr $num \* $j `
echo "$num X $j= $res "
j=` expr $j + 1 `
done
