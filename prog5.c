#include <stdio.h>

int main() {
    int i, j;
    printf("Enter number of rows: ");
    scanf("%d", &i);
    printf("Enter number of columns: ");
    scanf("%d", &j);

    int a[i][j];

    printf("Enter elements of the matrix:\n");
    for (int row = 0; row < i; row++) 
    {
        for (int col = 0; col < j; col++) 
        {
            printf("Element [%d][%d]: ", row, col);
            scanf("%d", &a[row][col]);
        }
    }

    printf("\nMatrix of a\n");

    for (i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    
    printf("\nSum of each row:\n");
    for (int row = 0; row < i; row++)
    {
        int rowSum = 0;
        for (int col = 0; col < j; col++) 
        {
            rowSum += a[row][col];
        }
        printf("Row %d sum = %d\n", row, rowSum);
    }

    printf("\nSum of each column:\n");
    for (int col = 0; col < j; col++) 
    {
        int colSum = 0;
        for (int row = 0; row < i; row++) 
        {
            colSum += a[row][col];
        }
        printf("Column %d sum = %d\n", col, colSum);
    }

    return 0;
}