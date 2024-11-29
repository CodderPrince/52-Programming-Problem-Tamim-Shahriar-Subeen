/******************************************************
 *    Author:  PRINCE_14                              *
 *          --MD. AN NAHIAN PRINCE                    *
 *          --CSE,BRUR                                *
 *          --ID: 12105007                            *
 *            PB: Factorial 100 [12]                  *
 ******************************************************/

#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int i, num, fact=1, count=0;
        scanf("%d",&num);
        for(i=5; i<=num; i*=5)
        {
            count = count + num/i;
        }

        printf("%d\n",count);
    }

    return 0;
}