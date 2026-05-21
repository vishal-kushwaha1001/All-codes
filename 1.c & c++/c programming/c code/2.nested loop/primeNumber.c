#include <stdio.h>
int main()
{
    int n;
     int flag = 0;
    printf(" input integer number: ");
    scanf("%d", &n);
    // for prime no
   
    for (int i = 2; i <= n/2 ; i++)
    {
        if (n % i == 0)
        {
            printf(" not a prime number ", i);
            flag = 1;
            break;
        }
    } 
     if( flag==0) printf( "number is prime no");


        return 0;}