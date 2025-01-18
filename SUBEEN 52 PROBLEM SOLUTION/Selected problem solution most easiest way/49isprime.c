/******************************************************
 *    Author:  PRINCE_14                              *
 *          --MD. AN NAHIAN PRINCE                    *
 *          --CSE,BRUR                                *
 *          --FB: https://facebook.com/mdannahian     *
 *            PB: Is Prime [49]                       *
 ******************************************************/

#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        unsigned long long int n;
        int i;
        scanf("%llu",&n);
        for(i=2; i*i<=n; i++)
        {
            if(n%i == 0)
            {
                printf("%llu is not a prime\n",n);
                break;
            }
        }
        if(i*i>n)
        {
            printf("%llu is a prime\n",n);
        }
    }

    return 0;
}