#include <stdio.h>

// area and circumference of circle

int main()
{
  float radius;
  float pie = 3.14;
  printf("Inter Radius of circle  in cm:");
  scanf("%f", &radius);

  printf("Area of the circle is :%f cm square \n", pie*radius*radius);
  printf("circumference of the circle is :%f cm", 2*pie*radius);
  return 0;
}