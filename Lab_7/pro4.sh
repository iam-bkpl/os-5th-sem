echo "Area of circle"
echo "Enter the radious of the circle"
read r
a1=` echo $r \* $r \* 3.14 | bc`
echo $a1
echo Area of rectange
echo Enter the length and the brith of the rectangle
echo enter the length
read l
echo enter wight of rectangle
read b
a2=` echo $l \* $b | bc `
echo $a2
echo Area of square
echo enter side of square a
read a
a3=` echo $a \* $a | bc `
echo $a3
