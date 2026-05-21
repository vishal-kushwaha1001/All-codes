#include <stdio.h>
int main()
{
    int n, product = 1;
    printf("Enter a number:");
    scanf("%d", &n);
    while (n > 0)
    { int lastdigit = n%10;
      product = product*lastdigit;
        
        n = n / 10;
    }
    printf("Sum is=%d", product);
    return 0;
}