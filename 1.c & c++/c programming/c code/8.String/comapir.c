#include<stdio.h>
void main(){
    char str1[]="naman";
    char str2[]="naman";
    int flag = 1;
    for(int i = 0 ;str1[i]!= '\0'; i++){
        str2[i] != str2[i];
        flag = 0;
        break;
    }
    if(flag=1){
        printf("same");
    }else printf("different");
}