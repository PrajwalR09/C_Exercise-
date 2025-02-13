/*Program to create a function to reverse the first n elemnts of the array */

#include<stdio.h>
void reversearr(int arr[], int);
int main(void){

    int arr[] = {5,45,20,13,62,41,24,31};
    int len, num;

    len = sizeof(arr) / sizeof(arr[0]);

    printf("Enter how many first N elements to be reversed\n");
    scanf("%d",&num);

    reversearr(arr, num);

    printf("The array after reverse is:\n");
    for(int i = 0; i < len; i++)
        printf("%d ", arr[i]);

    return 0;
}

void reversearr(int arr[], int num){

    int i, j, temp;

    for(i = 0, j = num-1; i < j; i++, j--){

        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}