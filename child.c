#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
int main() {
	pid_t id;
	id=fork();
	if(id<0) {
		printf("Process creation unsuccessful!\n");
	}
	else if(id==0) {
		printf("Child Process created: %d\n", id);
	}
	else {
		printf("Parent Process created: %d\n", id);
	}
	return 0;
}
