#include<stdio.h>

int main(void){

int arr[] = {1,4,8,22,10,6};
int len, i, sm, lr;

len = sizeof(arr) / sizeof(arr[0]);
sm = lr = arr[0];

for(i=0; i<len; i++)
{
    if(arr[i]<sm)
    sm = arr[i];
    else if(arr[i] > lr)
    lr = arr[i];
}

printf("sm = %d, lr = %d",sm,lr);

}