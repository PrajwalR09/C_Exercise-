/*Program to remove duplicate elements from an unsorted array*/

#include<stdio.h>

int main(void){

    int arr[] = {1,2,1,2,3,2,1};
    int i, j, k, len, pos, duplicate;

    len = sizeof(arr) / sizeof(arr[0]);

    for(i = 0; i < len; i++){
        duplicate = arr[i];
        for(j = i+1; j < len; j++){
            if(arr[j] == duplicate){
                for(k = j; k < len-1; k++){
                    arr[k] = arr[k+1];
                }
                    len--;
                    j--;
            }

        }
    }

    printf("The array after removing duplicates is:\n");

    for(i = 0; i < len; i++)
        printf("%d ",arr[i]);

    return 0;
}