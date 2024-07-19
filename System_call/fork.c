#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main(){
 fork();
 fork();
 fork();
 printf("This  is fork() system call\n");
 return 0;
}
