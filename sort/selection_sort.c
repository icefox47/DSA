#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, size, temp;
    int *arr;


    printf("Enter the number of elements: ");
    scanf("%d", &size);

    arr =  malloc(size * sizeof(int));

    if (arr == NULL)
        return 1;

    printf("Enter array elements:\n");
    
    for (i = 0; i < size; i++)
        scanf("%d", &arr[i]);
    

// Selection sort
//

    




    free(arr);
    return 0;
}


