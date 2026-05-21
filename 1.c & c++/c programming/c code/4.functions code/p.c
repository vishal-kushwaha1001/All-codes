#include <stdio.h>

int main()
{
    int n;
    printf("input number : ");
    scanf("%d", &n);

    int flage = 0;

    for (int i = n / 2; i > 1; i--)
    {
        if (n % i == 0)
        {
            flage = 1;
            break;
        }
    }
    if(flage == 0){printf("number is prime ");}
    else printf("number is not prime ");
}