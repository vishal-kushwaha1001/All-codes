#include<stdio.h>

int main(){
    int a ,b,c;
    printf("input 1st number :");
    scanf("%d",&a);
 
    printf("input 2st number:");
    scanf("%d",&b);

    printf("input last number :");
    scanf("%d",&c);

if (a>c && a>b)
{printf("%d is gratest of them",a);}

 if (b>c && b>a)
{printf("%d is gratest of them",b);}


 if (c>a && c>b)
{printf("%d is gratest of them",c);}

    return 0;
}