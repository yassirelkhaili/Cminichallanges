#include <stdio.h>

void putarr(int *nums, int size)
{
     int index = 0;
    printf("Array = {");
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
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
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
    putarr(nums, size);
    printf("\n");
    bubblesort(nums, size);
    printf("The biggest element is %d\n", nums[size - 1]);
    printf("The smallest element is %d", nums[0]);
    return 0;
}
