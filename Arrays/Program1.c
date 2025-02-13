/*Program to exchange adjecent array elements*/

#include<stdio.h>

int main(void){

    int arr[] = {20,40,50,60,30,80};
    int i , j, temp, len;

    len = sizeof(arr) / sizeof(arr[0]);

    for(i = 0; i < len; i += 2){

        temp = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = temp;
    }

    printf("The array after swaping is:\n");

    for(i = 0; i < len; i++)
        printf("%d ", arr[i]);

    return 0;
}