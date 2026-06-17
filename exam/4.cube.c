#include <stdio.h>

int main()
{
    int arr[100], n;
    int *ptr;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    ptr = arr;

    printf("Cube of array elements:\n");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", (*(ptr + i)) * (*(ptr + i)) * (*(ptr + i)));
    }
}