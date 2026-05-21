#include <stdio.h>
// sum of digit of number
int sm(int n);

int main()
{
    int number;
    printf("input number : ");
    scanf("%d", &number);

    int digitSum = sm(number);
    printf("sum of digit of number is  : %d ", digitSum);

    return 0;
}
int sm(int n)
{
    int sum = 0;
    while (n > 0)
    {

        sum = sum + n % 10;
        n = n / 10;
         
    } return sum;
   
}
