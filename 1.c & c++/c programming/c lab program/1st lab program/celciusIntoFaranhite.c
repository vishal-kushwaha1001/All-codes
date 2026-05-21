#include <stdio.h>
int main()
{
    float cel;
    printf("input temperature into celcius:");
    scanf("%f", &cel);
    float fern;

    printf("temperature in faranheit is:%f", cel * 1.8 + 32);

    return 0;
}