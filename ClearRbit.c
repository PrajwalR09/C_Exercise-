//Program to clear right most bit of a number
#include<stdio.h>
#define ClearRbit(num) (num&=(num-1))

void main()
{
    unsigned int num, mask = 0, pos = 0;

    printf("Enter the number\n");
    scanf("%d",&num);

   // ClearRbit(num);

    // mask = (num - 1);
    // num = num & mask;
    while(!(num == mask))
    {
        pos++;
        mask += (num & (1<<pos));
        //printf("The Number is %d\n",mask);
    }

    num = num & ~(1<<(pos));
    printf("The Lbit is is %d\n",pos);
    printf("The Number is %d\n",mask);
       printf("The Lbit Number is %d\n",num);
}