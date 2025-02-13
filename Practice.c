#include<stdio.h>
#include <stdlib.h>

void func(int a[], const int b[], int c[]);

int main(void){

   int a[]= {1,2,3,4};
   int b[] = {5,6,7,8};
   int c[]={9,10,11,12};
   func(a,b,c);
  // printf("%d\t",*ptr);
    //func2();
    // printf("Inside main():%d , %d\n",x,y);
    return 0;
}

void func(int a[], const b[], int c[])
{
    a =c;
    a[0]++;
    b=c;
    b[0]++;
}