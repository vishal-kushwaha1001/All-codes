#include <stdio.h>
// factor of number
int main()
{
    int n;
     int flag = 0;
    printf(" input integer number: ");
    scanf("%d", &n);
    
     printf("factor is :");
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            printf("%d \t", i);
        }
    } 
// for prime no
   
    for (int i = 2; i < n-1; i++)
    {
        if (n % i == 0)
        {
            printf(" not a prime number ", i);
            flag = 1;
            break;
        }
    } 
     if( flag==0) printf( "number is prime no");


    
}