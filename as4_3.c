#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<stdlib.h>
#include<sys/wait.h>
int main() {
	pid_t pd ;
	if(fork() == 0) {
		printf("Child is running.\n");
		exit(0);
	}
	else {
		pd = wait(NULL);
		printf("Parent is calling.\n");
		printf("Parent PID: %d\n", getpid());
		printf("Child PID: %d\n", pd);
	}
	return 0;
}
