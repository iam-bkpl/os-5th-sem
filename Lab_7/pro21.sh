echo to calculate the length of any given string
echo enter the string
read s
len=` expr $s | wc -c `
len=` expr $len - 1 `
echo length of string $s is $len
