/*Program to find the smallest element array and swap that element at 0th position*/
#include <stdio.h>

int main(void){

    int arr[] = {15, 3,5,8,9,13,1,2};
    int i, len, pos, temp;

    len = sizeof(arr)/sizeof(arr[0]);

    for(i = 0, pos = i; i < len; i++)
    {
        if(arr[i+1] < arr[pos])
            pos = i + 1;
    }

    if(pos != 0)
    {
        temp = arr[0];
        arr[0] = arr[pos];
        arr[pos] = temp;
    }

    printf("the sorted array is\n");

    for(i = 0; i < len; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}