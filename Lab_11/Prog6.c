#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#define MSGSZ 16
 main() { 
char *msg="hello1"; 
char inbuf[MSGSZ]; 
int p[2],pid,j; 
pipe(p); 
pid=fork();
 if(pid>0) { 
close(p[0]); 
write(p[1],msg,MSGSZ); 
}
 if(pid==0) {
 close(p[1]); 
read(p[0],inbuf,MSGSZ); 
printf("%s\n",inbuf);
 }
 exit(0);
 } 
