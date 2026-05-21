#include<stdio.h>

void fibonacci(int num);

int main(){
    int number;
     printf("input  number : ");
    scanf("%d", &number);
    fibonacci(number);
    return 0;

}
void fibonacci(int num){
int m= 0, n= 1, r;
 printf(" Fiboncci number is : %d\t %d\t", m, n);
for(int i =1; i<=num; i++){
    r= m+ n;
    printf("%d\t", r);
m= n;
n= r;

}

}