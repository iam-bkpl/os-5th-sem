echo "program to get the sum of the series"
echo enter value of n
read n
a=` expr 2 \* $n + 1 `
b=` expr $n + 1 `
c=` expr $a \* $b `
d=` expr $c \* $n `
sum=` expr $d / 6 `
echo "sum of the sireis is $sum"
