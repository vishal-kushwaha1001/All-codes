#include <stdio.h>
int main()
{   int num ;
    printf("Input month number :");
    scanf("%d", &num);
    switch (num)
    {
    case 1:
        printf("january \n 31 days");
        break;
    case 2:
        printf("febuary\n 29 days");

        break;
    case 3:
        printf("march \n 31days");
        break;
    case 4:
        printf("April \n 30 days");
        break;
    case 5:
        printf("may \n 31 days");
        break;
    case 6:
        printf(" june \n 30 days");
        break;
    case 7:
        printf(" july \n 31 days ");
        break;
    case 8:
        printf(" August \n 31 days");
        break;
    case 9:
        printf(" september \n 30 days");
        break;
    case 10:
        printf(" October \n 31 days");
        break;
    case 11:
        printf(" november \n 30 days"); 
        break;

    case 12:
        printf(" December \n 31 days");
        break;
        default: printf( "month name invalid and not exist");
        }}