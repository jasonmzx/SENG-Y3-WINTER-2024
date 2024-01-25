#include <sys/types.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int num = 20;
int main(){

  pid_t pid1, pid2;
  int status =0;

  pid1 = fork(); /* assume fork not failed, if failed then pid1=-1*/
  printf("Process ID = %d %d \n", (int)getpid(), num+5);
  
  if (pid1 == 0) { /* child process */
    num += 40;
    printf("Process ID = %d %d \n", (int)getpid(), num);
  
  } else { /* parent process */
    num -= 10;
    wait(NULL);
    printf("Process ID = %d %d \n", (int)getpid(), num);
  }

return 0;
}