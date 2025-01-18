/******************************************************
 *    Author:  PRINCE_14                              *
 *          --MD. AN NAHIAN PRINCE                    *
 *          --CSE,BRUR                                *
 *          --FB: https://facebook.com/mdannahian     *
 *            PB: Summation [6]                       *
 ******************************************************/

#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int num, first,last,sum;
        scanf("%d",&num);
        first = num/10000;
        last = num%10;
        sum = first + last;
        printf("Sum = %d\n",sum);
    }

    return 0;
}