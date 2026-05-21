#include <stdio.h>
int main()
{
    long int fact = 1, number; 
    printf("Enter a number: ");
    scanf("%ld", &number);
    int inputNumber = number;

    // using for loop
    for (int i = 1; i <= number; i++)
    {
        fact *= i;
    }

    // using while

    long int fact1 = 1;
    while (number > 1)
    {
        fact1 *= number;
        number--;
    }

    printf("Factorial of %ld is: %ld\n", inputNumber, fact);
    printf("Factorial of %ld is: %ld \n ", inputNumber, fact1);
    return 0;
}