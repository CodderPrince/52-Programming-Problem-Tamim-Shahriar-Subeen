/******************************************************
 *    Author:  PRINCE_14                              *
 *          --MD. AN NAHIAN PRINCE                    *
 *          --CSE,BRUR                                *
 *          --FB: https://facebook.com/mdannahian     *
 *            PB: Pascals Triangle 1 [44]             *
 ******************************************************/

#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,r, ncr, x;
        scanf("%d",&x);
        for(n=0; n<=x; n++)
        {
            for(r=0; r<=n; r++)
            {
                if(n==0 || r==0)
                {
                    ncr = 1;
                    printf("%d ",ncr);
                }
                else
                {
                    ncr = ncr*(n-r+1)/r;
                    printf("%d ",ncr);
                }
               
            }
             printf("\n");
        }
        printf("\n");
    }

    return 0;
}