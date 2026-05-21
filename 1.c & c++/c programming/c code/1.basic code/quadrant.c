#include<stdio.h>
int main(){
     int x,y;

     printf("input (x,y) :");
     scanf(" %d ,%d ",&x ,&y); 
   
if( x>0){if(y>=0) printf("lie in 1st quadrant");
         else printf(" lie in 4th quadrant");}

else if(y>=0) printf(" lie in 2nd quadrant");
else printf("lie in 3rd quadrant");

    return 0;
}