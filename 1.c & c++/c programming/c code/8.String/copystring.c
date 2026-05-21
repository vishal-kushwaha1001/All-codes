#include<stdio.h>
#include<string.h>

void main(){
  
    char string1[50];
    printf("input string : ");
    gets(string1);
    puts(string1);
    printf(" length is : %d\v",strlen(string1));

    char str[30];
    strcpy(str,string1);
    puts(str);
//  char str3[200] = strcpy(str,string1);
// printf("%s",str3);

}
