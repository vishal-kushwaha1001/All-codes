#include<stdio.h>
#include<stdlib.h>
int main (){ 
int x;
printf(" enter number x: "); 
scanf("%d",&x);

int y;
printf(" enter number y: ");
scanf("%d",&y);

int z;
printf(" enter number z: ");
scanf("%d",&z);

float Radius;
printf("inter radius is :");
scanf("%f",&Radius);

printf("sum:%d\n", x+y+z);
printf("sum ofproduct:%d\n", x*x+y*y+z*z);
printf("sum of cube:%d\n", x*x*x+y*y*y+z*z*z);
printf("area of circle about radius is :%f\n",3.14*Radius*Radius);
printf("area of rectange of lenghth x and width y is :%d\n", x*y);  
printf("volume of rectangle of lenght x , wedth y, height z is:%d\n", x*y*z);
printf("volume of sphere is : %f\n", 1.33*Radius*Radius*Radius);
return 0; 
}
