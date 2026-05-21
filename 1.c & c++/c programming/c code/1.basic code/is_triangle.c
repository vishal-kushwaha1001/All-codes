#include<stdio.h>

int main(){
    int a ,b,c;
    printf("input 1st side :");
    scanf("%d",&a);
 
    printf("input 2st side :");
    scanf("%d",&b);

    printf("input last side:");
    scanf("%d",&c);

if (a+b>c && b+c>a && c+a> b)
{printf("they are triangle");
 
}
else printf("they are not a triangle");
 
    return 0;
}