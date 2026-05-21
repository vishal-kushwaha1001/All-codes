#include <stdio.h>
int main()
{// inverted number triangle
    int n;
    printf("input row : ");
    scanf("%d", &n);

    for (int i = n; 1 <= i; i--)
    {

        for (int j = 1; j <= i; j++)
        {

            printf("%d ", j);
        }
        printf("\n");
    }



    return 0;
}