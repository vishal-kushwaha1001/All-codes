#include<stdio.h>
// power of number

int power(int x,int y);

int main(){
int b,e;
    printf("input base number : ");
    scanf("%d", &b);
    printf("input power of  number : ");
    scanf("%d", &e);
    int p = power(b ,e);
     printf("power of number is : %d ", p);

}
 int power(int x ,int y){ int z= 1;
    for(int i = 1; i<= y; i++){ 
      z = z* x; 
    
    }
     return z; 
    
 }