#include<stdio.h>
#include<stdlib.h>
void main(){
int pfd[2];
 if(pipe(pfd)<0)
  printf("error");
 if(!fork()){
  char data;
  printf("i'm child");
  scanf("%c",&data);
  write(pfd[1],&data,1);
  printf("child exiting");
 }else{
  char data;
  read(pfd[0],&data,1);
  printf("I'm parent");
  printf("received %c from child",data);
  printf("parent existing.... \n");
  exit(0);
 }
}
