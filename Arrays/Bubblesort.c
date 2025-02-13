/*Program to sort an array in an ascending order using bubble sort*/

#include <stdio.h>

int main(void){

    int arr[] = {10,24,40,78,32,8,9};
    int len, i, swaps, j, temp;

    len = sizeof(arr) / sizeof(arr[0]);

    for(i = 0; i < len - 1; i++){
        swaps = 0;
        for(j = 0; j < len-i-1; j++){
            if(arr[j+1] < arr[j])
            {
                swaps++;
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            } 
        }
        if(swaps == 0){
            printf("The array is already sorted\n");
            break;
        }

    }

    printf("the sorted array is\n");

   for(i = 0; i < len; i++){
    printf("%d ",arr[i]);
   }

   return 0;
}