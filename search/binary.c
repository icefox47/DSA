#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, target, size, loc = -1, middle, left, right;
    int *arr;


    printf("Enter the number of elements: ");
    scanf("%d", &size);

    arr =  malloc(size * sizeof(int));

    if (arr == NULL)
        return 1;

    printf("Enter array elements:\n");
    
    for (i = 0; i < size; i++)
        scanf("%d", &arr[i]);
    
    printf("Enter the element to search: ");
    scanf("%d", &target);


    // Binary Search Algorithm

    left = 0;
    right = size - 1;

    while (left <= right)
    {
        middle = (left + right) / 2;

        if (arr[middle] == target)
        {
            loc = middle;
            break;
        } else if (arr[middle] < target)
            left = middle + 1;
        else
            right = middle -1;
    }

    if (loc != -1)
        printf("Element is found at location %d\n", loc);
    else
        printf("Elements is not found!\n");


    free(arr);
    return 0;
}

