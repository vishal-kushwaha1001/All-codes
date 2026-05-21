#include <stdio.h>
#include <string.h>

void main()
{
      char str[100];
    printf("input string : ");
    scanf("%s",str);

    char rev[100];
    int len = strlen(str);
    printf(" length of str is : %d\n",len);

    for (int i = 0; i <= len; i++){
        
        rev[i] = str[len-i-1];
    }
    printf("%s\n", rev);

//     if(strcmp(str,rev)==0){
//         printf("String is pallindrome ");
//     }
//     else  printf("String is  not pallindrome ");
    
}
