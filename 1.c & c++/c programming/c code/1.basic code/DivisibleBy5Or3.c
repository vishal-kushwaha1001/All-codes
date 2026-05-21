#include<stdio.h>

int main(){
int number;
printf("enter number:");
scanf("%d",&number);

if ( number % 3 == 0 || number%3 == 0)
   { printf("number is devisible by 3 or 5");
   }
    else printf(" Number is not devisible by 3 or 5");

        
    return 0; 
    }