#include<stdio.h>
#include<stdlib.h>
#define MAX 20
void main(){
int fragment[MAX], block[MAX], process[MAX], i, j, nb, np, temp,
lowest=9999; static int barray[MAX], parray[MAX];

printf("\n\t\tMemory Management Scheme - Best Fit");
printf("\nEnter the number of blocks:");
scanf("%d",&nb);
printf("\nEnter the number of processes:");
scanf("%d",&np);

printf("\nEnter the size of the blocks:\n");

for(i=1; i<=nb; i++){
printf("Block[%d]:",i);
scanf("%d",&block[i]);
}

printf("\nEnter the size of processes:\n");
for(i=1; i<=np; i++)
{
printf("Process[%d]:",i);
scanf("%d", &process[i]);
}

for(i=1; i<=np; i++)
{
for(j=1; j<=nb; j++)
{
if(barray[j]!=1)
{
temp=block[j]-process[i];
if (temp>=0)
if(lowest>temp)
{
parray[i]=j;
lowest=temp;
}
}
}
fragment[i]=lowest;
barray[parray[i]]=1;
lowest=10000;
}
printf("\nProcess No.\tProcess Size\tBlock No\tBlockSize\tFragment"); for(i=1; i<=np && parray[i]!=0; i++)
{
printf("\nP[%d]\t\t%d kb\t\tB[%d]\t\t%d kb\t\t%d kb",i,process[i],parray[i],block[parray[i]],fragment[i]);
}
printf("\n");
}
