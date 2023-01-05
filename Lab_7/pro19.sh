echo to calculate the reverse of any no.
echo enter the number
read no
rev=0
while [ $no -gt 0 ]
do
d=`expr $no % 10 `
rev=`expr $rev \* 10 `
rev=`expr $rev + $d `
no=`expr $no / 10 `
done
echo reverse of number is $rev
