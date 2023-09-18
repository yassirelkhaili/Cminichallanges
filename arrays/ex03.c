#include <stdio.h>

void putarr(int *nums, int size)
{
     int index = 0;
    printf("Sorted Array = {");
    while (index < size)
    {
        printf("%d", nums[index]);
        if(index != size - 1)
        printf(", ");
        index++;
    }
    printf("}");
}

void bubblesort(int *arr, int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j + 1] > arr[j])
            {
                int temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main ()
{
    int index = 0;
    int nums[10];
    int size = sizeof(nums) / sizeof(nums[0]);
    while(index < size)
    {
        int num;
        int nbr = index + 1;
        printf("Enter element number %d:\n", nbr);
        scanf("%d", &num);
        nums[index] = num;
        index++;
    }
    bubblesort(nums, size);
    putarr(nums, size);
    return 0;
}