#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <unistd.h>

//Execute like so: ./program <int value input>
// gcc L4_q3.c -o L4_Q3

int sum=10, count=0;

void *runner_add(void *param){   
 count++;
    
    for(int j=0; j<3; j++){
        sum = j + atoi(param);
        printf("count = %d ADD Thread sum= %d \n", count, sum);
    }
 pthread_exit(0);
}

void *runner_sub(void *param){
 count++;
    for(int k=0; k<3; k++){
        sum -= atoi(param);
        printf("count = %d SUB Thread sum = %d \n",count, sum);
    }
 pthread_exit(0);
}

int main(int argc, char *argv[]){
 pthread_t tid[4];
 pthread_attr_t attr[4];

    for(int i=0;i<4;i++)
        pthread_attr_init(&attr[i]);

 pid_t pid1, pid2;
 int stat,rc;

 pid1 = fork();
 if(pid1 == 0) { /* child process */
    
    for(int i=0; i<4; i++){
        if(i%2 == 0)
            rc = pthread_create(&tid[i], &attr[i], runner_add, argv[1]);
        else
            rc = pthread_create(&tid[i], &attr[i], runner_sub, argv[1]);
    }

    pid2 = fork();

    if(pid2 > 0) { // Still the PID 1 process
        waitpid(pid2, &stat,0);
        printf("PID2 | Sum Value = %d \n", sum);

    } else{ //Child of PID1 (grandchild)
        printf("PID2 Grandchild | Sum Value = %d \n", sum);
        
        for(int i=0;i<4;i++)
            pthread_join(tid[i], 0);
    }
 } else {
    waitpid(pid1, &stat,0);
 }
 
 fflush(stdout); // Ensure stdout is flushed before program exits
 return (0);
}