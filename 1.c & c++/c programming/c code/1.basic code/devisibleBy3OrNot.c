#include<stdio.h>

int main(){
int number;
printf("enter number:");
scanf("%d",&number);

if ( number % 3 == 0 && number%5 == 0)
   { printf("number is devisible by 3 and 5");
   }
    else printf(" Number is not devisible by 3 and 5");

        
    return 0; 
    }