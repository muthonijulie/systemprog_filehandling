#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

void forkInstance(){
 int y=3;
 if(fork()==0){
  printf("Y is:%d",++y);
 }else{
  printf("Y is:%d\n",--y);
}
}
 int main(){
   forkInstance();
 return 0;
}
