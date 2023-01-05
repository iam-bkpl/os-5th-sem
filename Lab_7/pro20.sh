echo "to calculate the sum of digits of a given number"
echo enter the number
read no
sum=0
while [ $no -gt 0 ]
do
d=`expr $no % 10 `
sum=`expr $sum + $d `
no=`expr $no / 10 `
done
echo "sum of digits is $sum"
