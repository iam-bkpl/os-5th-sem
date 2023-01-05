echo program to generate prime no. between two given inputs
echo enter low range
read low
echo enter max range
read max
while [ $low -le $max ]
do
i=2
while [ $i -le `expr $low - 1 ` ]
Do
if [ ` expr $low % $i ` -eq 0 ]
then
break
else
i=` expr $i + 1 `
fi
done
if [ $low -eq $i ]
then
echo $low
fi
low=` expr $low + 1 `
done

