#include<stdio.h>

#define EvenOdd(num) (num%2?printf("Odd\n"):printf("Even\n"))

void main()
{
    unsigned int num, mask = 0x1;

    printf("Enter the number\n");
    scanf("%d",&num);

//Method 1: Using Macro
    EvenOdd(num);
// Method 2: Using Bitwise Operator
    // if((num & mask)==0)
    //     printf("Number is even\n");
    // else
    //     printf("Number is odd\n");
}