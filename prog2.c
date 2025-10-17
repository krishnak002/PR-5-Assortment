// Q2 develop a program that finds largest value in 2D array.


#include<stdio.h>

int main()
{

    int i, j, row, col,max;

    printf("Enter the row size :");
    scanf("%d", &row);

    printf("Enter the column size :");
    scanf("%d", &col);

    int a[row][col];

    printf("\nEnter Value of Array A\n");
    for (i = 0; i < row; i++)
    {
        for ( j = 0; j < col; j++)
        {
            printf("Array a[%d][%d] ",i,j);
            scanf("%d", &a[i][j]);
        }
    }
    max = a[0][0];
    for (i = 0; i < row; i++)
    {
        for ( j = 0; j < col; j++)
        {
            if (a[i][j] > max)
            {
                max = a[i][j];
            }
        }
    }
    printf("\nThe max value : %d\n",max);
    
    return 0;
}