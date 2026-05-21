#include<stdio.h>
// fptr = fopen("filename", mode )
int main (){
   FILE*fptr;
   fptr = fopen("test.txt","r");
   if(fptr== NULL){
    printf("error : file not exit\n");
   }
   else printf("file open successfully\n");
   char words[30];
   fscanf(fptr,"%s\n",&words);
   printf("word is : %s\n",words);
   fclose(fptr);
   return 0; 
}