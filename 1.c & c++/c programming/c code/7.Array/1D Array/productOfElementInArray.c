#include<stdio.h>
int product( int arr[],int size){

    int p=1;
    for(int i = 0; i<size; i++ ){
        p=p*arr[i];
    }
    return p;
}
void main(){ int size;
printf("input size of array : ");
scanf("%d",&size);

int array[size];
for(int i = 0; i<size;i++){
    scanf("%d",&array[i]);

}

printf("product of element in array is : %d",product(array,size));


}