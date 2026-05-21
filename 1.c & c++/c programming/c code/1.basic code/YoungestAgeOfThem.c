#include<stdio.h>
// by using nested if else
int main(){
    int ram,shyam,ajay;
    printf("input age of Ram :");
    scanf("%d",&ram);
 
    printf("input age of shyam:");
    scanf("%d",&shyam);

    printf("input age of ajay :");
    scanf("%d",&ajay);

if(ram <  shyam){if(  ram <ajay) printf(" ram is youngest of them  ");
 else printf("ajay is youngest of them");
}
  else{ if(shyam< ajay) printf("shyam is youngest of them");
else printf("ajay is youngest of them");
  }



    return 0;
}