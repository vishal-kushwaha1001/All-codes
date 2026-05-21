#include <stdio.h>

int fact(int n);

int main()
{
    int num;
    printf("input number : ");
    scanf("%d", &num);
    printf("factorial of number is : %d ", fact(num));

    return 0;
}
int fact(int n)
{
    if (n == 0 || n==1 )
    {
        return 1;
    }

    
    return n * fact(n - 1);
}
