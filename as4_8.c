#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
    pid_t pid = fork();

    if (pid < 0) {
        // Fork failed
        perror("fork failed");
        exit(1);
    }
    else if (pid > 0) {
        // Parent process
        printf("Parent process exiting, PID: %d\n", getpid());
        exit(0);  // Parent exits immediately
    }
    else {
        // Child process
        printf("Child started, PID: %d, Parent PID: %d\n", getpid(), getppid());
        sleep(5); // Give parent time to exit
        printf("Child now orphaned, new Parent PID: %d\n", getppid());
        exit(0);
    }
}
