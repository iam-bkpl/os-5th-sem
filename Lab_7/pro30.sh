echo program to check no. is armstrong or not
echo enter the number
read no
sum=0
dup=$no
while [ $no -gt 0 ]
do
d=`expr $no % 10 `
d=`expr $d \* $d \* $d `
sum=`expr $sum + $d `
no=`expr $no / 10 `
done
if [ $sum -eq $dup ]
then
echo "armstrong number"
else
echo not armstrong number
fi
