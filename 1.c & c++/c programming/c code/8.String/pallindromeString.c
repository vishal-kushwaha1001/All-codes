#include <stdio.h>
#include <string.h>

void main(){
    char str[100];
    printf("input string : ");
    scanf("%s",str);
   
    int len = strlen(str);
    int flage =0;
    for (int i = 0; i <= len; i++){
       if( str[i] !=str[len-i-1]){
        flage = 1;
       break;}
    }
    if(flage ==0 ) printf("String is pallindrome ");
    else  printf("String is  not pallindrome ");
}

