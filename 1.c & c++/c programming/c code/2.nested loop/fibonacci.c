#include <stdio.h>
//fibonachhi sequence
void main()
{
    int n = 0, m = 1, p;
    printf("%d\t", n);
    printf("%d\t", m);
    for (int i = 1; i < 10; i++)
    {
        p = n + m;
        printf("%d \t", p);
        n = m;
        m = p;
    }
}