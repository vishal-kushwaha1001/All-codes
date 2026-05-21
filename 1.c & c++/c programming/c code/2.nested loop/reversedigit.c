#include <stdio.h>
int main()
{
    int n ,rev =0 ;
    printf("Enter a number:");
    scanf("%d", &n);
    while (n > 0)
    { int lastdigit = n%10;
     rev= rev*10;
     rev= rev +lastdigit;
        
        n = n / 10;
    }
    printf("reverse number is=%d", rev);
    return 0;
}