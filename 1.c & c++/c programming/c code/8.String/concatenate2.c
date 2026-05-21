#include <stdio.h>
void main(){
    char str1[100];
    printf("input string : ");
    gets(str1);
    char str2[100];
    printf("2nd string :");
    gets(str2);

    char str3[200];
    int k ;
    for (k = 0; str1[k] != '\0'; k++){
        str3[k] = str1[k];
        
    }
    str3[k] = ' ';
    k++;

    for (int j = 0; str2[j] != '\0'; j++)
    {
        str3[k] = str2[j];
        k++;
    }
    str3[k] = '\0';
    printf("After concatenation, the string would look like:\n %s", str3);
}