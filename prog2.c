// Q2 develop a program that finds largest value in 2D array.


#include<stdio.h>

int main()
{

    int i,j,a[3][3],max;
    printf("\nEnter Value of Array A\n");
    for (i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf("Array a[%d][%d] ",i,j);
            scanf("%d", &a[i][j]);
        }
    }
    max = a[0][0];
    for (i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
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