#include <stdio.h>
// Right angle pascal Triangle
int fact(int n)
{
    int f = 1;
    for (int i = 1; i <= n; i++)
    {
        f *= i;
    }
    return f;
}

int ncr(int n, int r)
{
    if (n >= r)
        return fact(n) / (fact(r) * fact(n - r));
}

void pascalTriangle(int n)
{
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            int pascal = ncr(i, j);
            printf(" %d ", pascal);
        }
        printf("\n");
    }
}

int main()
{
    int number;
    printf("input number : ");
    scanf("%d", &number);
    printf(" pascal triangle is given below :\n");
    pascalTriangle(number);

    return 0;
}