echo to cheack no. is even or not
echo enter no
read a
e=` expr $a % 2 `
if [ $e -eq 0 ]
then
echo even no
else
echo odd
fi
