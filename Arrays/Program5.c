/*Program to sort an array and display its content in ascending and secending order.*/

#include<stdio.h>

int main(void){

    int arr[] = {23, 14, 63, 78, 45, 12, 42, 25, 17};
    int len, i, j, temp, k;

    len = sizeof(arr) / sizeof(arr[0]);

    for(i = 0; i < len - 1; i++){

        k = i;
        for(j = i + 1; j < len; j++){

            if(arr[j] < arr[k])
                k = j;
        }

        if(k != i)
        {
            temp = arr[i];
            arr[i] = arr[k];
            arr[k] = temp;
        }
    }

    printf("The sorted array in acending order is:\n");

    for(i = 0; i < len; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("The sorted array in descending order is:\n");

    for(i = len - 1 ; i >= 0; i--){
        printf("%d ", arr[i]);
    }

    return 0;
}