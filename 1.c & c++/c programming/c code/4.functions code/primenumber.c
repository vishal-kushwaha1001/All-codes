#include <stdio.h>

// prime number code using  higest factor method
int higestfactor(int n);
int main()
{
    int number;
    printf("input number : ");
    scanf("%d", &number);

   
    int prime = higestfactor(number);
    if (prime == 1)
    {
        printf(" prime number ");
    }
    else
        printf(" non prime number");

    return 0;
}
int higestfactor(int n){  int hf;
    for (int i = n / 2; i >= 1; i--)
    {
        if (n % i == 0)
        {  hf = i;
            break;
        }

    }
    return hf;
    }