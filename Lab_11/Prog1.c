#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
void main()
{
 char c;
int exflag=0;
printf("press a key\n");
scanf("%c",&c);
if(!fork()){
exflag=1;
exit(0);
}
else{
while(!exflag){
printf("i got the character \n");
exit(0);
}}
}
