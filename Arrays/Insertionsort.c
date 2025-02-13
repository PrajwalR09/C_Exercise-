/*Program to sort an array in ascending order using insertion sort*/

#include<stdio.h>

int main(void){

    int arr[] = {82,42,49,8,25,52,36,93,59};//{10,30,50,20,70,80,60,45};
    int len, i , j, k;

    len = sizeof(arr)/sizeof(arr[0]);

    
 for(i = 0; i < len; i++){
    k = arr[i];
    for(j = i - 1; j >= 0 && k < arr[j]; j--){
        arr[j+1] = arr[j];
    }

    arr[j+1] = k;
}

    printf("The sorted array is\n");

    for(i = 0; i < len; i++)
        printf("%d ", arr[i]);

    return 0;
}