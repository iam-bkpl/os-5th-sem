#include<stdio.h>
#include<stdlib.h>
int exflag=0;
void main()
{ char c;
if(!fork()){
printf("press a key");
scanf("%c",&c);
exflag=1;
exit(0);
}
else{
while(!exflag);
printf("i got the character");
exit(0);
}
}
