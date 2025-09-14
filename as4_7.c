#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
    pid_t pid = fork();

    if (pid == 0) {
        // Child process
        printf("Child exiting.\n");
        exit(0);   // Child exits immediately
    } else if (pid > 0) {
        // Parent process
        printf("Parent is sleeping, Child is now a Zombie.\n");
        sleep(10); // Parent keeps running without wait()
	printf("\nParent exiting.\n");
    } else {
        perror("fork failed");
    }

    return 0;
}

