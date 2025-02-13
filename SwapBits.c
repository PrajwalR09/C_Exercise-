#include<stdio.h>
int swapBits(unsigned int num, unsigned int i, unsigned int j){

    unsigned temp =0;
    printf("num=%d\n",num);

    temp = (1<<(i-1)) | (1<<(j-1));
        printf("temp=%d\n",temp);

    num = num ^ temp;

    printf("num=%d\n",num);

    return num;

}
void main()
{
    unsigned int num=0, i=0,j=0;
    printf("Enter the Num, ith bit, jth bit to swap\n");
    scanf("%d %d %d", &num, &i, &j);

    int res = swapBits(num, i, j);

    printf("Result=%d\n",res);

}