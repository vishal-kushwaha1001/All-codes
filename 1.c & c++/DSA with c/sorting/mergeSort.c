#include <stdio.h>
#include <stdlib.h>

// Merges two subarrays of arr[].
// First subarray is arr[l..m]
// Second subarray is arr[m+1..r]
void merge(int arr[], int si, int mid, int ei)
{

    int n1 = ei - si + 1;
    

    // Create temp arrays
    int temp[n1];

    // Merge the temp arrays back into arr[l..r

    int i = si;
    int j = mid +1;
    int k = 0;
    while (i <= mid && j <= ei)
    {
        if (arr[i] <= arr[j])
        { 
            temp[k] = arr[i]; 
            i++;
        }
        else 
        {
            temp[k] = arr[j];
            j++;
        }
        k++; 
    }

    // Copy the remaining elements of L[],
    // if there are any
    while (i <= mid)
    {
        temp[k++]= arr[i++];
    }

    // Copy the remaining elements of R[],
    // if there are any
    while (j <= ei)
    {
        temp[k++]= arr[j++]; 
    }

    // Copy data to temp arrays L[] and R[]
    for (k = 0, i = si; k < n1; k++, i++)
    {
        arr[i] = temp[k];
    }
}

// l is for left index and r is right index of the
// sub-array of arr to be sorted
void mergeSort(int arr[], int si, int ei)
{

    if (si < ei)
    {
    
    
        int mid = si + (ei - si) / 2;

        // Sort first and second halves
        mergeSort(arr, si, mid);
        mergeSort(arr, mid + 1, ei);

        merge(arr, si, mid, ei);
    }
}

// Driver code
int main()
{

    int arr[] = {38, 27, 43, 10,50};
    int arr_size = sizeof(arr) / sizeof(arr[0]);

    mergeSort(arr, 0, arr_size - 1);
    int i;
    for (i = 0; i < arr_size; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}