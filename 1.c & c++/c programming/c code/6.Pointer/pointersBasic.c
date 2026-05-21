#include<stdio.h>
 int main(){
int x = 4;
int*xAdd =&x;
int y =70;
int* yAdd=&y;

//print address of variable
printf("\n%p ",xAdd);
printf("\n%p",yAdd);
printf("\n%p",&x);
printf("\n%p",&y);


// print value with the help of address
printf("\n%d", *xAdd);
printf("\n%d", *yAdd);// where * is derefrence operator

return 0;
 }
