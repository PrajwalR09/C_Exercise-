/*Program to find the most frequent elemnet in a sorted array*/

#include<stdio.h>

int main(void){

    int arr[] = {23, 14, 63, 78, 45, 12, 42, 25, 17};//{1,1,2,3,3,5,5,5,6,7,7,7,7,7,7};
    int len, i, frequent, j, m_frequent = 0, ele;

    len = sizeof(arr) / sizeof(arr[0]);

    for(i = 0; i < len; i++){

        frequent = 0;
        for(j = i+1; j < len; j++)
        {
            if(arr[i] == arr[j]){
                frequent++;
            }
        }
   

        if(frequent > m_frequent){
            m_frequent = frequent;
            ele = arr[i];
        }   
    }

    if(m_frequent == 0)
        printf("No frequent ele present\n");
    else
     printf("most frequent ele is: %d\n",ele);
    return 0;

}