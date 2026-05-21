#include<stdio.h>
void main(){ 
    
    int array[]={5,2,3,4,4,5,5,6,3,4,54,3,5,3,5,3,5,35};
   int size = sizeof(array)/sizeof(array[0]);
   //size= 4*size of array/ 4

    //output
     for(int i = 0 ; i<size; i++){
        printf("%d\n",array[i]);
     }



}