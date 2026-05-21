#include <stdio.h>
int digits(int n);
int power(int b,int e);
int armstrong(int n);

void main()
{
    int number;
    printf("input Number : ");
    scanf("%d", &number);
    int x = armstrong(number);
    if (number == x)
        printf("number is Armstrong number");
    else
        printf("not Armstrong number");
}


int armstrong(int n)
{
    int sum = 0;
    int a = n;
    while (a > 0) // 153
    {
        int lastdigit = a % 10;
        sum = sum + power(lastdigit, digits(n));
        a = a / 10;
    }
    return sum;
}

int power(int b, int e)
{
    int p = 1;
    for (int i = 1; i <= e; i++)
    {
        p *= b;
    }
    return p;
}

int digits(int n)
{
    int count = 0;
    while (n > 0)
    {
        n = n / 10;
        count++;
    }
    return count;
}