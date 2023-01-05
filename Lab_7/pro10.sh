echo "to find eploy payroll"
read basic
if [ $basic -lt 1500 ]
then
hra=` echo $basic \* 10 / 100 | bc `
da=` expr $basic \* 90 / 100 100 | bc `
else
hra=500
da=` echo $basic \* 98 / 100 | bc `
echo dearness allavance is =rs $da
fi
gs=` echo $basic + $hra +$da | bc `
echo Gross salary=rs.$gs
