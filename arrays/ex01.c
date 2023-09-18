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

int main ()
{
    int nums[10];
    int size = sizeof(nums) / sizeof(nums[0]);
    for (size_t i = 0; i < size; i++)
    {
        int j = i + 1;
        nums[i] = j;
    }
    putarr(nums, size);
    return 0;
}