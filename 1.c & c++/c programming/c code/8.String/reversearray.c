#include <stdio.h>
void reverse(int arr[],int n);
void main()
{
    int n;
    printf("input size : ");
    scanf("%d",&n);
    int number[n];
    printf("input array : ");
    for (int i = 0; i < n; i++){
        scanf("%d", &number[i]);
    }
     reverse(number,n);
}
void reverse(int arr[],int n){
    int start =0, end = n -1;
 while(start<end){
    int temp = arr[end];
     arr[end]= arr[start];
     arr[start]= temp;
     start++;
     end--;
 }
    printf("Reverse array :");
    for (int i = 0; i <n; i++){
        printf("%d ", arr[i]);
    }
}

