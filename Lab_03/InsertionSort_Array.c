// InsertionSort_Array

#include <stdio.h>

int insertionSort(int arr[], int n)
{
    int key, j;
    for (int i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
    return 0;
}

int main()
{
    int n;
    printf("Enter the Number:");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements: \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    insertionSort(arr, n);

    printf("Sorting array is: \n");
    for (int i = 0; i < n; i++)
    {
        printf("| %d | ", arr[i]);
    }

    return 0;
}