#include<stdio.h>
void main(){ 
    int size ;
    printf("input size of array : ");
    scanf("%d",&size);
    
    
    int array[size];
    // input Array
    printf("input Array : ");
    for(int i= 0 ; i<size;i++){
        scanf("%d",&array[i]);

    }

    //output
     for(int i = 0 ; i<size; i++){
        printf("%d\t",array[i]);
     }



}