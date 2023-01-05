echo program to check no. is prime or not
echo enter the number
read no
count=2
while [ $count -le `expr $no / 2 + 1 ` ]
do
if [ ` expr $no % $count ` -eq 0 ]
then
f=1
break
else
f=0
fi
count=` expr $count + 1 `
done
if [ $f -eq 0 ]
then
echo prime number
else
echo not prime number
fi
