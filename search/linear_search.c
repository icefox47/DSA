#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,s, size, flag=0, loc;
    int *arr;

    arr =  malloc(sizeof(int));

    printf("Enter the number of elements: ");
    scanf("%d", &size);

    printf("Enter array elements:\n");
    
    for (i = 0;i < size; i++)
        scanf("%d", &arr[i]);
    
    printf("Enter the element to search: ");
    scanf("%d", &s);

    for (i = 0; i < size; i++)
    {
        if (s == arr[i])
        {
            flag = 1;
            loc = i;
            break;
        }
    }

    if (flag == 1)
        printf("Element %d is found on location, %d\n", s, loc);
    else
        printf("Element not found!\n");

    return 0;
}
