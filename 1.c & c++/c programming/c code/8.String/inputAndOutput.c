#include<stdio.h>

void main(){
    // 1st approach 
    char str[50];
    printf("input string : ");
    scanf("%s",str);
    printf("%s\n",str);
    // but input only one words in string because scanf consider space as terminator.

    //2nd approach
    char string1[50];
    printf("input another string : ");
    gets(string1);
    puts(string1);
    // In this method gets give warning issue
}
