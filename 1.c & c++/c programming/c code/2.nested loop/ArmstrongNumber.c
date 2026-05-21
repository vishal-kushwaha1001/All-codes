#include <stdio.h>
#include<math.h>
/*
Armstrong number is 1,2,3,4,5,6,7,8,9, 153,370,371,407,1634
example:- 153 digit= 3
therefore,
            1^3 + 5^3 + 3^3
            = 1 + 125 +27
            = 153
*/
int main()
{
     int n,m,a,b;
    printf("Enter a number here : ");
    scanf("%d",&n);
    int count=0,sum=0;
    a=n;
    while(a!=0){
        a=a/10;
        count++;
    }
    b=n;
    while(b!=0){
        m=b%10;
        b=b/10;
        sum=sum+pow(m,count);

    }
    if(sum==n){
        printf("Armstrong number");
    }
    else{
        printf("Not an Armstrong number");
    }


    return 0;
}
