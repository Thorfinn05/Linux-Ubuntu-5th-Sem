#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<stdlib.h>
#include<sys/wait.h>
int main() {
        pid_t pid = fork();
        if(pid == 0){
                //printf("Child running\n");
                int i;
                for (i=1; i<=5; i++){
                        printf("%d ", i);
                }
		printf("\n");
        }
        else if(pid>0) {
                printf("\nParent running\n");
        }
        return 0;
}
