#include <stdio.h>
int factorial( int num);

void main()
{
     int  number; 
    printf("Enter a number: ");
    scanf("%d", &number);

    int result = factorial(number);


    printf("Factorial of %d is: %d\n", number, result);
   
 
}

 int factorial(int num){
    
     int fact = 1;
    for( int i = num; i> 1; i--){
        fact*=i;
    }
    
return fact;

 }