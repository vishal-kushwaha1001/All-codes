#include<stdio.h>
int power(int b,int e);

int main (){
    int base ; 
    printf("input base : ");
    scanf("%d",&base);
    int exponent ; 
    printf("input exponent : ");
    scanf("%d",&exponent);
    int result = power(base,exponent);
    printf("power is : %d",result);


return 0;
}

int power(int b,int e){
    if(e==0){return 1;}
    int p = b*power(b,e-1);
    return p;
}