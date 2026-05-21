#include<stdio.h>

int main()
{ float x;
printf("enter x:");
scanf("%f", &x);
float y;
printf("enter y:");
scanf("%f", &y);
float z;
printf("enter z:");
scanf("%f", &z);
    printf("product of x&y&z is:%f\n", x*y*z);
    printf("sum of x&y&z is :%f\n", x+y+z);
    printf("sum of products of x&y&z i.e x^2+y^2+z^2:%f\n", x*x+y*y+z*z);
    return 0;
}