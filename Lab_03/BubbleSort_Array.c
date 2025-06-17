// BubbleSort_Array

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int bubbleSort(int arr[], int n)
{
    int swapped;
    for (int i = 0; i < n - 1; i++)
    {
        swapped = 0;
        for (int j = 0; j < n -1 -i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = 1;
            }
        }
        if (swapped = 0)
        {
            break;
        }
    }
}

int main()
{
    //Sorting 
    // int n;
    // printf("Enter the Number:");
    // scanf("%d", &n);

    // int arr[n];
    // printf("Enter the elements: \n");
    // for(int i=0; i<n; i++){
    // scanf("%d", &arr[i]);
    // }

    // bubbleSort(arr, n);

    // printf("Sorting array is: \n");
    // for(int i=0; i<n; i++){
    //     printf("| %d | ", arr[i]);
    // }

    FILE *fp;
    clock_t start, end;
    int i, n=100, arr[1000], temp, swapped;
    fp = fopen("best.txt", "r");
    for ( i = 0; i < n; i++)
    {
        fscanf(fp, "%d", &arr[i]);
    }
    fclose(fp);
    printf("Best Case Scenario");
    start = clock();
    bubbleSort(arr,n);
    end = clock();
    printf("\nTime taken: %.2f seconds\n", (double)(end - start) / CLOCKS_PER_SEC);

    return 0;


}