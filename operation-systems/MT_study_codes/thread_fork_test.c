// JM's own code
#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <unistd.h>

#define NUM_THREADS 2

int COUNT = 0;

void* thread_runner() {
 COUNT++;
 
 printf("count = %d \n", COUNT);
 pthread_exit(0);

}

int main(int argc, char* argv[]){

pthread_t thread_ids[NUM_THREADS];
pthread_attr_t thread_attribs[NUM_THREADS];

 //! IMPORTANT, you need to initialize the Thread Attribute Types
 for(int i = 0; i < NUM_THREADS; i++) {
  pthread_attr_init(&thread_attribs[i]);
 }

    //* This thread won't create if it's Prior to the fork 
    // pthread_create(&thread_ids[0], &thread_attribs[0], thread_runner, NULL);


pid_t fork1 = fork();

    printf("PID of CHILD %d \n", fork1);
    pthread_create(&thread_ids[0], &thread_attribs[0], thread_runner, NULL);
    pthread_create(&thread_ids[1], &thread_attribs[1], thread_runner, NULL);

    pthread_join(thread_ids[0], 0);
    pthread_join(thread_ids[1], 0);

if (fork1 > 0){ //* PARENT PROC
    printf("This is the parent process...\n");
    printf(" count at parent: %d\n", COUNT);

    // Wait for the child process to prevent it from becoming a zombie.
    wait(NULL);
} else { // * CHILD PROC
    printf("This is the child process!\n");
    printf(" count at child: %d\n", COUNT);
}

return 0;
}

