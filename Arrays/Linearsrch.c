//Program for Linear search

#include<stdio.h>

int LinearSearch(int arr[], int len, int num);

int main(void){

    int arr[10], i, j, num, index;
        printf("Enter the array 10 elements",i);
    for(i = 0; i < 10; i++){
        printf(" a[%d] : ",i);
        scanf("%d",&arr[i]);
    }

    printf("Enter the number to be searched\n");
    scanf("%d",&num);

    index = LinearSearch(arr, 10, num);

    if(index == -1)
        printf("The number %d is not found\n", num);
    else
        printf("The number is %d found at position %d\n",num,index);

    return 0;

}

int LinearSearch(int arr[], int len, int num){

    int i = 0;

    while(arr[i] != num && i < len){
        i++;
        //printf("i = %d",i);
    }
    if(i < len)
        return i;
    else 
    {
        
        return -1;
    }
}