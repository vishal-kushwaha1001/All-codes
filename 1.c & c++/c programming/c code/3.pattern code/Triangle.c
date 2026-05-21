#include<stdio.h>
#include<conio.h>
// triangle /piramid pattern 
void main()
{ int n;
printf("input row");
scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for (int  j = 0;j<=n-i; j++)
        {
            printf(" ");
        }
        for ( int k=1;k<=2*i-1;k++){
            printf("* ");
        }
        
        printf("\n");
    }
}
