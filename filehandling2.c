#include<stdio.h>
#include<string.h>
 int main(){
   FILE *fr;
   fr=fopen("sample.txt","r+");
    fprintf(fr,"This is a text file");
     fclose(fr);
    return 0;
     }
