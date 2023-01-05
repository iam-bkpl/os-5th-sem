#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void) {
    for (int i = 0; i < 4; i++) {
        pid_t child_pid = fork();
        if (child_pid == 0) {
            // This is the child process.
            printf("I am the child process with PID %d and PPID %d.\n", getpid(), getppid());
            return 0;
        } else {
            // This is the parent process.
            printf("I am the parent process with PID %d. I just created a child with PID %d.\n", getpid(), child_pid);
        }
    }

    return 0;
}
