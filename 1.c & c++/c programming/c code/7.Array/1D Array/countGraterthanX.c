#include<stdio.h>
 int countGratest(int arr[],int size,int tar);
void main (){int size ;
    printf("input size of array : ");
    scanf("%d",&size);
    
    int array[size];
    // input Array
    printf("input Array : ");
    for(int i= 0 ; i<size;i++){
        scanf("%d",&array[i]);
    }
    int target ;
    printf("input target value : ");
    scanf("%d",&target);
    printf("No of Element in array %d is grater than : %d",target,countGratest(array,size,target));


}
int countGratest(int arr[],int size,int tar){
    int count = 0;
    for(int i =0; i<size; i++){
        if(arr[i]>tar){count++;}
    }
    return count;
}