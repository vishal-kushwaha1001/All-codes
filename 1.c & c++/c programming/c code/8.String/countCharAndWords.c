#include <stdio.h>
#include<string.h>
void main(){
    char str[100];
    printf("input string :");
    fgets(str, 100, stdin);
    int length = 0;
    int space = 0;
    for (int i = 0; str[i] != '\0'; i++)
    { length++;
        if(str[i]==' '){
            space++;
        }
    }
    printf("number of character in lines : %d\n",length-1-space);
    printf("number of words in string : %d\n",space +1);
    printf("length is : %d ",length);
    printf("length of str using function : %d", strlen(str));
}