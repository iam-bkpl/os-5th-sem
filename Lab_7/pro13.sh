echo program copy two files
echo "enter source file name"
read file1
echo "enter destination file name"
read file2
if cp $file1 $file2 2>rav
then
	echo "file copied successfully" 
else
	echo "unable to copy"
fi
