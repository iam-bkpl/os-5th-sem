echo program to implement switch case
echo enter any character
read char
case $char in [A-Z])
echo you entered a Capital case character;;
[a-z])
echo you entered a small case character;;
[0-9])
echo you entered a digit;;
?)
 echo you entered special character;;
*)
 echo you entered more than one character;;
esac
