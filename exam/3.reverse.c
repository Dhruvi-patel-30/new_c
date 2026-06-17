#include <stdio.h>

void reverseArray(int arr[], int n)
{
    printf("Reverse array elements: ");
    
    for(int i = n - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int sumArray(int arr[], int n)
{
    int sum = 0;

    for(int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    return sum;
}

int main()
{
    int arr[100], n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    reverseArray(arr, n);

    printf("Sum of all elements = %d", sumArray(arr, n));

}