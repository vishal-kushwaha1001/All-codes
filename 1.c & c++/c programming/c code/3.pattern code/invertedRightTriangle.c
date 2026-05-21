#include <stdio.h>
int main()
{// inverted triangle star pattern
    int n;
    printf("input row : ");
    scanf("%d", &n);

    for (int i = n; 1 <= i; i--)
    {

        for (int j = 1; j <= i; j++)
        {

            printf("* ");
        }
        printf("\n");
    }

  // 2nd way 

 for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= n+1-i; j++)
        {

            printf("* ");
        }
        printf("\n");
    }


 return 0;

}