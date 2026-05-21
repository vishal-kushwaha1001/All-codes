#include<stdio.h>

int main(){
float f;//8.9
printf("enter number:");
scanf("%f",&f);
int x= (int)f;// 8
float a = (float)x;//genuin method for comperision
if ( f-a == 0)
   { printf("number is  an integer");
   }
    else {printf("number is not integer");}

        
    return 0; 
    }