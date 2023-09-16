#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void bubblesort(int *arr, int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int binarysearch(int *arr, int target, int start, int end)
{
    if (start > end)
    {
        printf("Error 404 not found\n");
        return (-1);
    }
    int middle = (start + end) / 2;
    if(arr[middle] == target)
    {
        printf("Target found at index: %d \n", middle);
        return middle;
    }
    if(arr[middle] < target)
        return binarysearch(arr, target, middle + 1, end);
    if(arr[middle] > target)
        return binarysearch(arr, target, start, middle - 1);
}

// types of algorithmes!!

int main ()
{
    int nums[] = {1, 3, 34, 45, 123, 32, 5, 6, 9, 9};
    int index = (sizeof(nums) / sizeof(nums[0]));
    bubblesort(nums, index);
    int target = 133;
    binarysearch(nums, 123, 0, index - 1);
    return 0;
}