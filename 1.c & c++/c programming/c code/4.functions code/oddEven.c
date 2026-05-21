#include <stdio.h>
// number is odd or even
int oddEven(int x)
{
    if (x %2== 0)
        printf("number is even");
    else
        printf("number is odd ");
}

int main()
{
    int a;
    printf("input number : ");
    scanf("%d", &a);
   
    oddEven(a);

    return 0;
}