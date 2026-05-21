#include<stdio.h>

int main()
{ float price[10];
for(int i = 0; i<10; i++) {
    printf("enter price:\n");
    scanf("%f",&price[i]);}
    
   for(int i = 0; i<10; i++) { 
   printf("total price with gst:%f\n",price[i]+(0.18*price[i]) ); } 
   return 0;
}