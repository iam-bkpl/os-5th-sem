echo program to calculate the power of any no.
echo enter number
read num
echo enter power
read pow
counter=0
ans=1
while [ $pow -ne $counter ]
do
ans=` expr $ans \* $num `
counter=` expr $counter + 1 `
done
echo "$num power of $power $ans"
