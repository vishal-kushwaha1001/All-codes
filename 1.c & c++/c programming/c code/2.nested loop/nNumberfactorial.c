#include <stdio.h>
int main()
{
   long long  int fact = 1 , number; 
    printf("Enter a number less than 19: ");
    scanf("%lld", &number);
    // valid for number less than 19
    
    for (int i = 1; i <= number; i++)
    { 
        fact *= i;
        printf("Factorial of %d is: %lld\n",i, fact); 
    }
       
    

    return 0;
}


