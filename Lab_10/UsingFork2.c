#include <stdio.h>
#include <unistd.h>
int main()
{
pid_t pid;
pid = fork();
if (pid < 0) {
perror("fork() failed");
return 1;
} else if (pid == 0) {
printf("I am the child process\n");
} else {
printf("I am the parent process\n");
}
return 0;
}
