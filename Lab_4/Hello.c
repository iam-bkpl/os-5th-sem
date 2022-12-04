#include<stdio.h>
int main(int argc,char *argv[])
{
printf("The Name of this program is: '%s'.\n",argv[0]+2);
printf("This program is invoked with %d arguments.\n",argc-1);
if(argc>1)
{
int i;
printf("The arguments are:\n");
for(i=1;i<argc;i++)
printf("%s\n",argv[i]);
}
return 0;
}
