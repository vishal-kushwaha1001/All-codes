#include<stdio.h>

int main()
{float number;
printf(" enter number of table do you    want:");
scanf("%f",&number);

printf("table  is given below :\n");
 for(float i=1;i<=10;i++){
 printf("%f\n", number * i);}printf("\n"); 
 
    
    return 0;
}