echo program to find sum of the series
echo "Enter a number:"
read num
i=1
sum=0
while [ $i -le $num ]
do
sum=`expr $sum + $i`
i=`expr $i + 1`
done
echo "The sum of first $num numbers is: $sum"
