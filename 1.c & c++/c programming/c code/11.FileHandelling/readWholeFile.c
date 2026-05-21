#include<stdio.h>
// fptr = fopen("filename", mode )
int main (){
   FILE*fptr;
   fptr = fopen("test.txt","r");
   if(fptr== NULL){
    printf("error : file not exit\n");
   }
   else printf("file open successfully\n");

   char word;
   while((word = fgetc(fptr))!= EOF){
    printf("%c",word);
   }
   
   fclose(fptr);
   return 0; 
}