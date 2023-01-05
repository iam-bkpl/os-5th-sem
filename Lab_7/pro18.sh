echo "program to check file is ordinary or directory"
echo "enter the file name"
read f1
if [ -d $f1 ]
then
echo "directory file"
else
echo "ordinary file"
fi
