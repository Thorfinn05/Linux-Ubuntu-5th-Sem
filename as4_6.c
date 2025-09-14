#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include<stdlib.h>
#include<sys/types.h>
int main() {
	pid_t pid1 = fork();
	if (pid1 == 0) {
		printf("Child1 is running.\n");
		exit(0);
	}
	else {
		pid_t pid2 = fork();
		if(pid2 == 0) {
			printf("Child2 is running.\n");
			exit(0);
		}
		else {
			wait(NULL);
			wait(NULL);
			printf("Parent: Both child process are completed.\n");
		}
	}
}
