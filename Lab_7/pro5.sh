echo "script to find given no is +ve ,-ve or 0"
echo enter value
read a
if [ $a -gt 0 ]
then
echo no. is positive
else
if [ $a -lt 0 ]
then
echo no. is negative
else
echo no. is zero
fi
fi
