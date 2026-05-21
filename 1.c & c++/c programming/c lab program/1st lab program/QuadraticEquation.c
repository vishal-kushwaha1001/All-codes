#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c;
    printf(" input a:");
    scanf("%d", &a);

    printf(" input b:");
    scanf("%d", &b);

    printf(" input c:");
    scanf("%d", &c);

    int d = (b*b - 4*a*c);

    printf(" D is %d\n",d);

    if (d >= 0)
    {
        printf(" value of x is:%f and", (sqrt(d)-b)/(2*a));
        printf(" :%f", (-sqrt(d)-b)/(2*a));
    }
    else
        printf("invalid");

    return 0;
}