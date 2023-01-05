echo "all airthemetic operations on floating point"
echo "enter two variables"
echo "enter a"
read a
echo "enter b"
read b 

echo "sum= `echo $a + $b  | bc` "
echo "sub=`echo $a - $b | bc` "
echo "div= `echo $a / $b | bc` "
echo "mul= `echo $a \* $b | bc` "
echo "mod= `echo $a % $b | bc` "

