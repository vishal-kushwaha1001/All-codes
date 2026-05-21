#include <stdio.h>

int main()
{
    int m, n, result;
    printf("input table to start:");
    scanf("%d", &m );
    printf("and to end:");
    scanf("%d", &n);

    for (int i = m; i <= n; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            result = i * j;
            printf("%d\n", result);
        }
        printf("\v");
    }

    return 0;
}