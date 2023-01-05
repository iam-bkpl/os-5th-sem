#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

void main()
{
 int pfd[2];
if(pipe(pfd)<0)
printf("error");
if(!fork()){
char data;
printf("I'm child\n");
printf("press any key to exit……\n");
scanf("%c",&data);
write(pfd[1],&data,1);
printf("child exiting\n");
}
else{
char data;
read(pfd[0],&data,1);
printf("I'm parent\n");
printf("received %c from child\n",data);
printf("parent exiting……\n");
exit(0);
}
}
