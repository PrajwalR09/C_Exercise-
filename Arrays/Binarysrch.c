// Program to find an element in a sorted array using binary search.

#include<stdio.h>

int BinarySearch(int arr[], int len, int num); //function decleration for binary search

int main(void){

    int arr[] = {6,9,15,19,23,29,32,36,41,47,53,62,66,72,75,82,89,90,93};
    int len, num, index;

    printf("Enter the an element to be searched\n"); //Enter element to be searched
    scanf("%d",&num);

    len = sizeof(arr)/sizeof(arr[0]); //Toatl no of elements in an array

    index = BinarySearch(arr, len, num); //Receiving index postion of element

    if( index == -1) //Checking receicved index position 
        printf("The element %d is not found\n", num); 
    else
        printf("The element %d is found at index %d\n", num, index); //Display element and its index position if found

    return 0;

 }

 int BinarySearch(int arr[], int len, int num){
    
    int up, low = 0, mid;

    up = len -1; //second half of an array contains larger values


    while(low <= up) //checking all the vlaues till low > up
    {
            mid = (low + up)/2; //finding mid element of an array
        if(num == arr[mid])     //checking if element is present at mid
            return mid;         //return the mid value which indicates the index if present element
        else if(num < arr[mid]) //if element is less than mid ele then checking the element in the left half of an array
            up = mid - 1;       //updating the up to mid-1 to check left half
        else if(num > arr[mid]) //checking if num is greater than mid ele of array
            low = mid + 1;      // updating low to mid+1 to check the element on the right half
    }
    return -1;      // If element is not found return -1

 }