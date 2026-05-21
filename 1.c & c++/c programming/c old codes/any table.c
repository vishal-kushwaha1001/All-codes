#include<stdio.h>

int main()
{int number;
printf(" enter number:");
scanf("%d",&number);

printf("table  is given below :\n");
 for(int i=1;i<=10;i++){
 printf("%d\n", number * i);}printf("\n"); 
 
    
    return 0;
}