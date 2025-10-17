// Q3 develop a program that transpose the matrix

#include<stdio.h>

int main()
{

    int i, j, row, col;

    printf("Enter the row size :");
    scanf("%d", &row);

    printf("Enter the column size :");
    scanf("%d", &col);

    int arr[row][col];

    for(i=0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            printf("Enter arr[%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\nThe Transpose of Matrix:\n");

    for(j=0; j < col; j++)
    {
        for(i= 0; i< row; i++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;

}