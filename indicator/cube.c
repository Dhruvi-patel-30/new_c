#include <stdio.h>

void cubeArray(int *ptr, int row, int col)
{
    printf("Cube of all elements:\n");

    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            int value = *(ptr + i * col + j);
            printf("%d\t", value * value * value);
        }
        printf("\n");
    }
}

int main()
{
    int row, col;

    printf("Enter number of rows: ");
    scanf("%d", &row);

    printf("Enter number of columns: ");
    scanf("%d", &col);

        int arr[row][col];

    printf("Enter array elements:\n");
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    cubeArray(&arr[0][0], row, col);

}