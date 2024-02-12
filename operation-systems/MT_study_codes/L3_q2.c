#include <stdio.h>

void main()
{
   int i;

   for (i=0;i<4;i++)
   {
      printf("FORKED: [%d] [%d] i=%d\n", getppid(), getpid(), i);
      fork();

   }

}