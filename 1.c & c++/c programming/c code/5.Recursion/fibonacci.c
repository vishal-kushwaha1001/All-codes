#include <stdio.h>
int fib(int n);
int main()
{
    int n;
    printf("input term : ");
    scanf("%d", &n);
    printf(" fibonacci of %d term is  :%d",n, fib(n));
    return 0;
}
int fib(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    int fibonacci = fib(n - 1) + fib(n - 2);

    return fibonacci;
}
