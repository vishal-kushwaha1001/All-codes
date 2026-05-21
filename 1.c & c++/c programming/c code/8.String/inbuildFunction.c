#include<stdio.h>
#include<string.h>

void main(){
  
    char string1[50];
    printf("input another string : ");
    gets(string1);
    puts(string1);
    printf("%d",strlen(string1));
}
