#include <stdio.h>
int main()
{
  int a;
  printf(" input a which is integer:");
  scanf("%d", &a);
  float b;
  printf(" input b which is float:");
  scanf("%f", &b);
  double c;
  printf(" input c which is double:");
  scanf("%lf", &c);
  char d;
  printf(" input d which is char:");
  scanf(" %c", &d);

  printf(
      "size of a,b,c in bytes:\n %d (int)bytes\n %d(float)bytes\n %d (double)bytes\n %d(char)bytes\n ",
      sizeof(a), sizeof(b), sizeof(c), sizeof(d));

  return 0;
}