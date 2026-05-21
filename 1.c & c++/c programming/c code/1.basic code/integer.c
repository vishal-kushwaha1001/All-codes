#include<stdio.h>

int main(){
float f;//8.9
printf("enter number:");
scanf("%f",&f);
int x= (int)f;// 8
if ( f-x == 0)
   { printf("number is integer");
   }
    else {printf("number is not integer");}

        
    return 0; 
    }