#include <stdio.h>
int main()
{ // inverted triangle star pattern
    int n;
    printf("input row : ");
    scanf("%d", &n);
    int m;
    printf("times of triangle : ");
    scanf("%d", &m);
    for (int k = 1; k <= m; k++)
    {

        for (int i = 1; i <= n; i++)
        {

            for (int j = 1; j <= n + 1 - i; j++)
            {

                printf("* ");
            }
            printf("\n");
        }
    }

    return 0;
}