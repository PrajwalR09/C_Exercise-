#include<stdio.h>

void main(){

    int len = 5,i;
//scanf("len=%d", &len);

    int arr[len];
    int EvenCount = 0;
    int Oddcount = 0;    

    for(i = 0; i < len; i++)
    {
        printf("Enter the valued of arr[%d] : ",i);
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < len; i++)
    {
  
        if(arr[i] % 2 == 0)
        {
            EvenCount ++;
        }
        else
        Oddcount++;
    }

    printf("Even Ele = %d, Odd ele = %d\n", EvenCount, Oddcount);
   // return 0;
}