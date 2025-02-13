#include<stdio.h>

void main()
{
    int arr[5],i;
    for(i = 0; i<5; i++)
    {
        printf("Enter the values in the arr[%d] : ", i);
        scanf("%d",&arr[i]);
    }
    printf("the entered array is\n");

    for(i=0;i<5;i++)
    printf("arr[%d] = %d \t", i, arr[i]);
}