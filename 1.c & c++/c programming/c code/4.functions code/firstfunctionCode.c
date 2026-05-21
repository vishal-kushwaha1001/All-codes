#include <stdio.h>
// max of two number
int max( int x ,int y);

int main()
{
    int a, b;
    printf("input 1st number : ");
    scanf("%d", &a);
    printf("input 2st number : ");
    scanf("%d", &b);

    int m = max(a, b);
    printf("maximum of %d and %d is :  %d", a, b, m);

    return 0;
}
int max(int x, int y)
{
    if (x > y)
        return x;
    else
        return y;
}