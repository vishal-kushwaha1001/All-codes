#include <stdio.h>
int main()
{// code for check  palindrome number or not

    int n, rev = 0;
    printf("Enter a number:");
    scanf("%d", &n);
    int originalNum = n;
    while (n > 0)
    {
        int lastdigit = n % 10;
        rev = rev * 10;
        rev = rev + lastdigit;
        n = n / 10;
    }
    if (rev == originalNum)
    {
        printf("\n number is palindrome number");
    }
    else
        printf("\n number is not  palindrome number");
    return 0;
}