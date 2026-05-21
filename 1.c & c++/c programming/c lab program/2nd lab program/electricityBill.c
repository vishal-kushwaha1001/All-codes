#include <stdio.h>
int main()
{
    float units, excess, billAmount;
    printf("enter the Units used : ");
    scanf("%f", &units);
    if (units >= 0 && units <= 200)
    {
        billAmount = units * 0.5;
        printf("your Electrict bill are : %f ", billAmount);
    }
    else if (units > 200 && units <= 400)
    {
        excess = units - 200;
        billAmount = 100 + (excess * 0.65);
        printf("your Electrict bill are : %f ", billAmount);
    }
    else if (units >400 && units <= 600)
    {
        excess = units - 400;
        billAmount = 230 + (excess * 0.80);
        printf("your Electrict bill are : %f ", billAmount);
    }
    else if (units > 600)
    {
        excess = units - 600;
        billAmount = 390 + (excess * 1);
        printf("your Electrict bill are : %f ", billAmount);
    }
    
    return 0;
}