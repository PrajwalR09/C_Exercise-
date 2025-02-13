/*Program to find difference betn smallest and largest ele of array*/

#include<stdio.h>

int main(void){

    int arr[] = {10, 20, 8, 5, 17, 4, 22 };
    int small, large, diff, len, i, j;

    len = sizeof(arr) / sizeof(arr[0]);

    small = large = arr[0];

    for(i = 1; i < len; i++){

        if(arr[i] < small)
            small = arr[i];
        else if(arr[i] > large)
            large = arr[i];
    }

    diff = large - small;

    printf("The diff is %d\n", diff);

    return 0;
}