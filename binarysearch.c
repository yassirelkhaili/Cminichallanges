#include <stdio.h>
#include <string.h>

int *bubblesort(int *arr)
{
    int index = (sizeof(arr) / sizeof(int));
    int *ptr = arr + index - 1;
    int *ptrend = arr;
    while(index--)
    {
        if(*ptr > *ptrend)
        {
            char temp = *ptr;
            *ptr = *ptrend;
            *ptrend = temp;
        }
        ptr++;
        ptrend--;
    }
    return arr;
}

// int binarysearch(int *arr, int target)
// {

// }



int main ()
{
    int nums[] = {1, 3, 34, 45, 123, 32, 5, 6, 9, 9};
    int *sortedarr = bubblesort(nums);
    // int target = 123;
    // printf("%d\n", nums[binarysearch(sortedarr, target)]);
    int *ptr = sortedarr;
    int index = sizeof(sortedarr) / sizeof(int);
    while(index--)
    {
        printf("%d ", ptr);
        ptr++;
    }
    return 0;
}