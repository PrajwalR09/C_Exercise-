#include<stdio.h>

int main(void){

    int arr[3][4], i, j;

    for(i = 0; i < 3; i++){
        printf("row %d col %d elements",i,i);
        for(j = 0; j < 4; j++)
        {
            printf("\ta[%d][%d]",i,j);
            scanf("%d",&arr[i][j]);
        }
    }

    printf("The Matrix is\n");

    for(i = 0; i < 3; i++){
        for(j = 0; j < 5; j++)
        printf("%5d", arr[i][j]);
        printf("\n");
    }
     printf("\n");
     return 0;
}