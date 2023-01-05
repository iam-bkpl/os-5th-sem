#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#define msgsz 16
void main()
{
char *msg1= ("hello one");
char *msg2= ("hello two");
char *msg3= ("hello three");
char inbuf[msgsz];
int p[2],j;
pipe(p);
write(p[1],msg1,msgsz);
write(p[1],msg2,msgsz);
write(p[1],msg3,msgsz);
for(j=0;j<3;j++){
read(p[0],inbuf,msgsz);
printf("%s\n",inbuf);
}
exit(0);
}
