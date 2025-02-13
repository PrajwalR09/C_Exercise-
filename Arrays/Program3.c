/*Program to find largest and second  largest ele of an array*/

#include <stdio.h>

int main(void){

    int arr[] = {50,60,40,10,70,62,8,3};
    int ll, sl, i, len;

    len = sizeof(arr) / sizeof(arr[0]);

    ll = sl = arr[0];

    for(i = 1; i < len; i++)
    {
        if(arr[i] > ll){

            sl = ll;
            ll = arr[i];
        }
        else if(arr[i] > sl && arr[i] != ll)
            sl = arr[i];
    }

    printf("The largest is %d and Sl is %d\n", ll,sl);

    return 0;
}