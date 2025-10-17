// Q1 develop a program that finds negative arrays

#include<stdio.h>
int main()
{
    int size,choice;
    printf("Enter size: ");
    scanf("%d",&size);

    int i,arr[size];

    for( i = 0; i < size; i++)
    {
        printf("Enter arr[%d] : ",i);
        scanf("%d",&arr[i]);
    }

    printf("\nThe Negative Arrays are:\n");
     for( i = 0; i < size; i++)
    {
        if (arr[i]<0)
        {
            printf("%d ",arr[i]);
        }
        
    }
    return 0;
}