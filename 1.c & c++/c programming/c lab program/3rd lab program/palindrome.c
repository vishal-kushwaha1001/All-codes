#include <stdio.h>

int reverse(int n);

int main()
{
     // code for check  palindrome number or not using functions

    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    int ans = reverse(number);

    if (ans == number)
    {
        printf(" Number is palindrome number");
    }
    else
        printf(" Number is not  palindrome number");
    return 0;
}

int reverse(int n)
{
    int rev = 0;
    while (n > 0)
    {
        int lastdigit = n % 10;
        rev = rev * 10;
        rev = rev + lastdigit;
        n = n / 10;
    }
    return rev;
}