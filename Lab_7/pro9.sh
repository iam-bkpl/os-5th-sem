echo to print the student marksheet
echo "enter marks in five subjects"
read s1
read s2
read s3
read s4
read s5
sum=` echo $s1 + $s2 + $s3 + $s4 +$s5 | bc `
echo "sum of five subject marks: $sum "
per=` echo $sum / 5 | bc `
echo "percentage marks: $per"
if [ $per -ge 60 ]
then
echo first div
elif [ $per -ge 50 ]
then
echo second div
elif [ $per -ge 40 ]
then
echo third div
else
echo fail
fi
