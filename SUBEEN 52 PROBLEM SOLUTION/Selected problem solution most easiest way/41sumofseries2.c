/******************************************************
 *    Author:  PRINCE_14                              *
 *          --MD. AN NAHIAN PRINCE                    *
 *          --CSE,BRUR                                *
 *          --FB: https://facebook.com/mdannahian     *
 *            PB: Sum of Series 2 [41]                *
 ******************************************************/

#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int i,n;
        double fact=1, sum=0;
        scanf("%d",&n);
        for(i=1; i<=n; i++)
        {
            fact = fact*i;
            sum = sum + i/fact;
        }
        printf("%.4lf\n",sum);
    }

    return 0;
}