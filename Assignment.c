#include<stdio.h>
#include<unistd.h>

int main(){

   printf("Parent Id is %d\nChild id is %d\n", getppid(), getpid());
  
   return 0;

}