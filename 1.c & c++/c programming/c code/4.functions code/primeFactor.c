#include <stdio.h>
int Isprime(int n);
void primeFactor(int n);
int main()
{
    int num;
    printf("input number : ");
    scanf("%d", &num);
    primeFactor(num);
    return 0;
}
void primeFactor(int n)
{
    for (int i = n / 2; i > 1; i--)
    {
        if (n % i==0)
        {
            // i is factor of n
            // check i is prime or not
            printf("prime factor is : ");
            if (Isprime(i) == 0)
            {
                printf("%d \t", i);
            }
        }
    }
}
int Isprime(int n)
{
    int flag = 0;
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {flag = 1;
            break;
        }
    }
return flag;
}
