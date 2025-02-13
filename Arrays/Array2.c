//Program to find the smallest element of an array and replace it to the 0th index.

#include<stdio.h>

int main(void){

    int arr[] = {7,17,29,3,4,1,2,8,9,11,10};
    int len, i, sm, temp, index;

    len = sizeof(arr)/sizeof(arr[0]);

    sm = arr[0];

    for(i = 0; i < len; i++)
    {
        if(arr[i] < sm){
            sm = arr[i];
            index = i;
        }
    }
    
    printf("the smallest element is %d\n",sm);

    temp = arr[0];
    arr[0] = arr[index];
    arr[index] = temp;

    printf("The array after swapping is\n");

    for(i = 0; i < len; i++)
        printf("%d ",arr[i]);

    return 0;


}