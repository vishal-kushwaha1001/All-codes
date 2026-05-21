#include<stdio.h>
float sum(float x, float y, float z);
 
int main()
{float x;
printf("enter x:%f\n");
scanf("%f", &x);
float y;
printf("enter y:%f\n");
scanf("%f", &y);
float z;
printf("enter z:%f\n");
scanf("%f", &z);
 float s = sum( x, y, z);
 printf(" sum is:%f\n", s);
    return 0;
}
float sum(float x, float y, float z) {
 return x + y + z;}