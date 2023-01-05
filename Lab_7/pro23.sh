echo "program to implement the continue statement"
num="1 2 3 4 5 6 7"
for nu in $num
do
p=` expr $nu % 2 `
if [ $p -eq 0 ]
then
echo "Number is an even"
continue
fi
echo found odd number
done
