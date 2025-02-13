/*Program to sort numbers in descending order using i) Selection sort ii) Bubble sort iii) Inserion sort*/

#include<stdio.h>

//#define Selection_sort
//#define Bubble_sort
#define Insertion_sort

int main(void){

    int arr[] = {23, 14, 63, 78, 45, 12, 42, 25, 17};
    int i, j, l, k, temp, swaps, len, choice;

    len = sizeof(arr) / sizeof(arr[0]);

#ifdef Selection_sort
 
    for(i = 0; i < len - 1; i++){

        k = i;
        for(j = i + 1; j < len; j++){

            if(arr[j] > arr[k])
                k = j;
        }

        if(i != k)
        {
            temp = arr[i];
            arr[i] = arr[k];
            arr[k] = temp;
        }
    }

    printf("The descending sorted array using selection sort is:\n");
    for(i = 0; i < len; i++)
        printf("%d ",arr[i]);
#endif

#ifdef Bubble_sort
    for(i = 0; i < len - 1; i++)  
    {
        swaps = 0;
        for(j = 0; j < len-1-i; j++)
        {
            if(arr[j+1] > arr[j])
            {
                swaps++;
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
        if(swaps == 0)
            break;
    }

        printf("The descending sorted array using Bubble sort is:\n");
    for(i = 0; i < len; i++)
        printf("%d ",arr[i]);
#endif

#ifdef Insertion_sort
     for(i = 1; i < len; i++){

        k = arr[i];
        for(j = i - 1; j >= 0 && k > arr[j]; j--)
            arr[j+1] = arr[j];
        arr[j+1] = k;
    }

        printf("The descending sorted array using Insertion sort is:\n");
    for(i = 0; i < len; i++)
        printf("%d ",arr[i]);
                    
#endif
    
    return 0;

}