#include <stdio.h>


// prime number code using without reserve keyword except break
int main()
{
    int n, hf;
    printf("input number");
    scanf("%d", &n);

    for (int i = n / 2; i >= 1; i--)
    {
        if (n % i == 0)
        {
            printf("higest factor except itself: %d \n", i);
            hf = i;
            break;
        }
    }
    if (hf == 1)
    {
        printf(" prime number ");
    }
    else
        printf(" non prime number");

    return 0;
}