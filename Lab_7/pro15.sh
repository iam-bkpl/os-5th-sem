echo program to print fibonacci series
echo enter the number of term
read num
num=` expr $num - 2 `
a=0
b=1
echo "Fibonacci series are follows"
echo $a
echo $b
count=1
while [ $count -le $num ]
do 
c=` expr $a + $b `
echo $c
a=$b
b=$c
count=` expr $count + 1 `
done
