#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main(void) {
    pid_t child_pid = fork();
    if (child_pid == 0) {
        // This is the child process.
        execl("/bin/ls", "ls", "-l", NULL);
        perror("execl failed");
        exit(1);
    } else {
        // This is the parent process.
        wait(NULL);
        printf("Child process finished.\n");
    }
    return 0;
}
