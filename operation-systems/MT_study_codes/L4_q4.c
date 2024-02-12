#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <unistd.h>

//Run with ./program <parameter>

int sum=100;

void *runner_add(void *param){
    sum += atoi(param);
    printf("ADD_thread sum = %d\n", sum);
    pthread_exit(0);
}

void *runner_sub(void *param){
    sum = sum - 2*atoi(param);
    printf("SUB_thread sum = %d\n", sum);
    pthread_exit(0);
}

int main(int argc, char *argv[]){
    pthread_t tid1, tid2;
    pthread_attr_t attr1, attr2;

    //Initializing Pthread attributes
    pthread_attr_init(&attr1);
    pthread_attr_init(&attr2);

    pid_t pid1, pid2;
    int stat, rc;
    
    pid1 = fork();
    if (pid1 > 0) { /* parent process */
        waitpid(pid1, &stat, 0);
        
        rc = pthread_create(&tid1, &attr1, runner_add, argv[1]);
        pthread_join(tid1, 0);
        
        rc = pthread_create(&tid2, &attr2, runner_sub, argv[1]);
        pthread_join(tid2, 0);
    }
    
    pid2 = fork();
    printf("sum = %d\n", sum);
    
    return(0);
}
