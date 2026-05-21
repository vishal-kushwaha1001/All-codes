#include <stdio.h>
int main()
{// square  star pattern
    int n;
    printf("input row& column : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= n; j++)
        {

            printf(" * ");
        }
        printf("\n");
    }

    return 0;
}