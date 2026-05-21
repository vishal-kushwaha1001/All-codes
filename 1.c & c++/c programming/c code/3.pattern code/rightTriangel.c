#include <stdio.h>
int main()
{// right triangle star pattern
    int n;
    printf("input row : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= i; j++)
        {

            printf("* ");
        }
        printf("\n");
    }

    return 0;
}