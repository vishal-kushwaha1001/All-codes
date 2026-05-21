#include<stdio.h>

int main()
{ float x;
printf("enter x:\n");
scanf("%f", &x);
float y;
printf("enter y:\n");
scanf("%f", &y);
float z;
printf("enter z:\n");
scanf("%f", &z);
    printf("product of x&y&z is:%f\n", x*y*z);
    printf("sum of x&y&z is :%f\n", x+y+z);
    printf("sum and products of x&y&z i.e x^2+y^2+z^2:%f\n", x*x+y*y+z*z);
    return 0;
}