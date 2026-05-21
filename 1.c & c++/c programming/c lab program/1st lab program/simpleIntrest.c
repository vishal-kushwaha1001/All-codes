#include <stdio.h>
int main()
{
    int p;
printf("input principal:");
scanf("%d",&p);

int r;
printf("input rate in percent:");
scanf("%d",&r);
int t;
printf("input time in years:");
scanf("%d",&t);

    printf("simple intrest is :%d",(p*r*t)/100);

    return 0;
}