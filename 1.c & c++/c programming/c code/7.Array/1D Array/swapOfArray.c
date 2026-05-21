#include <stdio.h>
void swap(int arr1[], int arr2[], int n);
void main()
{
    // declare 1st array
    int size1;
    printf("input size of array : ");
    scanf("%d", &size1);
    int rollNo[size1];

    // input Array1

    printf("input Array : ");
    for (int i = 0; i < size1; i++)
    {
        scanf("%d", &rollNo[i]);
    }
    int rollno2[size1];

    // input Array2
    printf("input  2nd Array : ");
    for (int i = 0; i < size1; i++)
    {
        scanf("%d", &rollno2[i]);
    } 
    // call by value
    
    swap(rollNo, rollno2, size1);

    // output
    for (int i = 0; i < size1; i++)
    {
        printf("%d\t", rollNo[i]);
    }
    printf("\n");
    for (int i = 0; i < size1; i++)
    {
        printf("%d\t", rollno2[i]);
    }
}

void swap(int arr1[], int arr2[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int temp = arr2[i];
        arr2[i] = arr1[i];
        arr1[i] = temp;
    }
}