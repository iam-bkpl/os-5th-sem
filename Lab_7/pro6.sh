echo "script to find greatest of three numbers"
echo enter three no.
echo enter a
read a
echo enter b
read b
echo enter c
read c
r=$a
if [ $b -gt $r ]
then
r=$b
fi
if [ $c -gt $r ]
then
r=$c
fi
echo greatest of $a $b $c is $r
