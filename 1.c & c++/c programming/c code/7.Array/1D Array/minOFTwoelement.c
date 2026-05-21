#include <stdio.h>
#include <limits.h>
int minimum(int arr[], int size);

void main()
{
    int size;
    printf("input size of array : ");
    scanf("%d", &size);

    int array[size];
    // input Array
    printf("input Array : ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &array[i]);
    }

    int min = minimum(array, size);
    printf("maximum element in array is : %d", min);
}
int minimum(int arr[], int size)
{
    int min = INT_MAX; // for min value (-infinity) INT_MIN
    for (int i = 0; i < size; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
    }
    return min;
}