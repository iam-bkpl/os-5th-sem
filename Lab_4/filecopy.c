#include<stdio.h>
int main(int argc,char *argv[])
{
char ch;
FILE *fs,*fd;
for (int i = 2;i<argc ; i++){
fs= fopen(argv[1], "r");
fd=fopen(argv[i],"w");
if(fs==NULL){
printf("Source file not found\n");
return 0;
}
while((ch=getc(fs))!=EOF)
{
putc(ch,fd);
}
}
fclose(fs);
fclose(fd);
printf("Copied");
return 0;
}
