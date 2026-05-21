#include <stdio.h>
void swap(int *x, int *y);
int main()
{//swaping of two number using recursion
    int x, y;
    printf("input x and y");
    scanf("%d %d", &x, &y);
    // printf("%d  %d\n", x, y);

    swap(&x, &y);
    printf(" inside main function  x = %d and y = %d\n", x, y);
    return 0;
}
void swap(int *x, int *y)
{
    int t = *x;
    *x = *y;
    *y = t;
}