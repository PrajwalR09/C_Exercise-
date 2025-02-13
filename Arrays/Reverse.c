#include<stdio.h>

int main(void){

    int arr [] = {1,2,3,4,6,7,13};
    int len, temp,i,j;

    len = sizeof(arr)/sizeof(arr[0]);
   // printf("The reversed array is %d\n",len);

    for(i = 0, j=len-1; i < j; i++,j--)
    {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      //  printf("temp = %d, i =%d, j=%d\n", temp, arr[i], arr[j]);
    }

    printf("The reversed array is\n");
    for(i = 0; i < len; i++)
    printf("%d ",arr[i]);
    return 0;
}