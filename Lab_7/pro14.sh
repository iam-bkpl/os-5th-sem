clear
echo program to calculate factorial of a given no.
j=1
k=1
echo Enter the value of required factorial
read num 
while [ $j -le $num ]
do 
k=` expr $k \* $j `
j=`expr $j + 1 `
done 
echo the factorial of $num is $k
