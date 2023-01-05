#include<stdio.h>
#include<unistd.h>
int main()
{
int pid, ppid;
pid = getpid();
ppid = getppid();
printf("The Process ID is %d \n", pid);
printf("The Parent Process ID is %d \n", ppid);
return 0;
}
