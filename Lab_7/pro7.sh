echo "to find leep year"
echo enter year
read year
if [ ` expr $year % 100 ` -eq 0 -a ` expr $year % 400 ` -eq 0 ]
then
echo "$year is a leap year"
elif [ ` expr $year % 100 ` -ne 0 -a ` expr $year % 4 ` -eq 0 ]
then
echo "$year is a leap year"
else
echo "$year is a not leap year"
fi
