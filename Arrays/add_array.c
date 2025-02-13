#include<stdio.h>

void main()
{
    int arr[5],i,sum=0;
    for(i = 0; i<5; i++)
    {
        printf("Enter the values in the arr[%d] : ", i);
        scanf("%d",&arr[i]);
        sum += arr[i];
    }
     printf("sum is= %d \t", sum);
}