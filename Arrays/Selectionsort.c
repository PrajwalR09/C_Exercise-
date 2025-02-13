/*Program to sort an array in the ascending order using Selection sort*/

#include<stdio.h>

int main(void){

    int arr[] = {13,6,9,17,14,3,4,8,1};
    int i, j, temp, len, min;

    len = sizeof(arr) / sizeof(arr[0]);

    for(i = 0; i < len - 1; i++){
        min = i;
        for(j = i+1; j < len; j++){
            if(arr[j] < arr[min]){
                min = j;
            }
        }

        if( i != min)
        {
            temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
   }

   printf("the sorted array is\n");

   for(i = 0; i < len; i++){
    printf("%d ",arr[i]);
   }

   return 0;
}

