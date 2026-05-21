#include <stdio.h>
int main()
{
    char gender;
    double bankbal, bonus;
    printf(" input gender ( M for male and  F for female) : ");
    scanf("%c", &gender);

   
    // calculating bonus for male and female
    if (gender == 'f' || gender == 'F' || gender == 'm' || gender == 'M')
    {   printf(" input your bank banlance:");
        scanf("%lf", &bankbal);

        if (gender == 'f' || gender == 'F')
        { // 2%/5% for female
            if (bankbal < 5000)
            { bonus = 0.02 * bankbal; }
            
            else bonus = 0.05 * bankbal;
        }

        // 2% for male
        else { bonus = 0.02 * bankbal;}

        printf(" bonus is : %lf", bonus);
    }
    else
        printf(" invalid gender please input F or M");

    return 0;
}