#include<stdio.h>

int main()
{ float marks[3];
printf("enter phy:");
scanf("%f", &marks[0]);

printf("enter che:");
scanf("%f", &marks[1]);

printf("enter math:");
scanf("%f", &marks[2]);
  printf("phy = %f, che = %f, math = %f", marks[0], marks[1], marks[2]) ;
  return 0;
}