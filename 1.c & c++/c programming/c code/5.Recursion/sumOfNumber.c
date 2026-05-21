#include <stdio.h>
int sum(int n);

int main()
{
    int number;
    printf("input number");
    scanf("%d", &number);
    printf("sum is : %d", sum(number));

    return 0;
}

int sum(int n)
{
    if (n == 1)
    {
        return 1;
    }
    int sumOfN = n + sum(n - 1);
    return sumOfN;
}