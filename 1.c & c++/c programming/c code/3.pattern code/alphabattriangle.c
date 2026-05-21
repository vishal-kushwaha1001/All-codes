#include <stdio.h>
int main()
{ // Alphabat triangle  pattern
    char cha;
    printf(" Input last capital character only : ");
    scanf("%c", &cha);
    int n = cha;
    

    for (int i = 65; i <= n; i++)
    {

        for (int j = 65; j <= i; j++)
        {

            printf("%c ", j);
        }
        printf("\n");
    }

    return 0;
}