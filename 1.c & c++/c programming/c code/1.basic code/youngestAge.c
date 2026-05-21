#include<stdio.h>
// using only if condition
int main(){
    int ram,shyam,ajay;
    printf("input age of Ram :");
    scanf("%d",&ram);
 
    printf("input age of shyam:");
    scanf("%d",&shyam);

    printf("input age of ajay :");
    scanf("%d",&ajay);

if(ram <  shyam){if(  ram <ajay) printf(" ram is youngest of them  ");}
  

 if(ajay <  shyam){if(  ajay< ram) printf(" ajay is youngest of them  ");}

if(  shyam <ram){if(shyam <ajay) printf(" shyam is youngest of them  ");}


    return 0;
}