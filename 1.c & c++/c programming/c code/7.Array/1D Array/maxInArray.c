#include <stdio.h>
int maximum(int arr[], int size);
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

    int max = maximum(array, size);
    printf("maximum element in array is : %d", max);
}
int maximum(int arr[], int size)
{
    int max = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    return max;
}