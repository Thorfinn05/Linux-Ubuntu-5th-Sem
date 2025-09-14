#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<stdlib.h>
#include<sys/wait.h>
int main() {
	pid_t id =  fork();
	if (id == 0) {
		//Child process
		printf("Child is running.\n");
		exit(0);
	}
	else if ( id > 0) {
		//Parent Procss
		pid_t pd = wait(NULL);
		printf("Parent is calling.\n");
		printf("Parent PID: %d\n", getpid());
		printf("Child PID: %d\n", pd);
	}
}
