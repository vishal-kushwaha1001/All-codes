#include<stdio.h>

int main(){
float cp;
printf("INTER COST PRICE:");
scanf("%f",&cp);

float sp;
printf("INTER SELLING PRICE:");
scanf("%f",&sp);
if ( cp-sp == 0)
   { printf("NO PROFIT NO LOSS");
   }
if ( cp<sp)
   { printf(" PROFIT IS:%f",sp-cp);
   }
if ( cp>sp)
   { printf(" LOSS IS:%f",cp-sp);
   }

    
    return 0; 
    }