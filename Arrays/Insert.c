// /*Program to insert an element at a given index*/

#include<stdio.h>
#define SIZE 10
int main(void){

    int arr[SIZE] = {0};
    int index, i, num;

    printf("Enter the array elements:\n");

    for(i = 0; i < SIZE; i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Enter the index at which elements needs to inseted\n");
    scanf("%d",&index);
    printf("Enter the number to be inserted at %d index\n",index);
    scanf("%d",&num);

    for(i = SIZE - 2; i >= index; i--){
        arr[i+1] = arr[i];
    }

    arr[index] = num;

    printf("The final array is\n");

    for(i = 0; i < SIZE; i++)
        printf("%d ",arr[i]);

    return 0;
}
