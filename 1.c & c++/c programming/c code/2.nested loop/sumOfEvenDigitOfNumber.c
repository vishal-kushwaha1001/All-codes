#include <stdio.h>
int main()
{
    int n, sum = 0;
    printf("Enter a number:");
    scanf("%d", &n);
    while (n > 0)
    { int lastdigit = n%10;
      if ( lastdigit%2==0){sum = sum + lastdigit;}
        n = n / 10;
    }
    printf("Sum is=%d", sum);
    return 0;
}