#include <stdio.h>
int main()
{// inverted number triangle is :-
// 1 1 1 1
// 2 2 2 
// 3 3
// 4
    int n ,sum ;
    printf("input row : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {

        sum = i;
        for (int j = 1; j <=  n+1-i; j++)
        { 

            printf("%d ", sum);
        }
        printf("\n");
    }



    return 0;
}