#include<stdio.h>
#include<limits.h>

int secondMaximum(int  arr[] ,int size);
void main(){int size ;
    printf("input size of array : ");
    scanf("%d",&size);
    
    int array[size];
    // input Array
    printf("input Array : ");
    for(int i= 0 ; i<size;i++){
        scanf("%d",&array[i]);
    }

   int max = secondMaximum(array,size);
   printf(" Second maximum element in array is : %d",max);

}
int secondMaximum(int arr[],int size){
int max = INT_MIN;
for(int i = 0 ; i<size; i++){
    if(max<arr[i]){max=arr[i];}
}
int secMax=INT_MIN;
for(int i = 0; i<size;i++){
    if(arr[i] != max && secMax<arr[i]){secMax=arr[i];}
}


return secMax;
}