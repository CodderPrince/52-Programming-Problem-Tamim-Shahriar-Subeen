/******************************************************
 *    Author:  PRINCE_14                              *
 *          --MD. AN NAHIAN PRINCE                    *
 *          --CSE,BRUR                                *
 *          --FB: https://facebook.com/mdannahian     *
 *            PB: Alternate Elements [24]             *
 ******************************************************/

#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int array[n];
        int i;
        for(i=0; i<n; i++)
        {
            scanf("%d",&array[i]);
        }

        for(i=0; i<n; i+=2)
        {
            printf("%d ",array[i]);
        }
        printf("\n");
    }

    return 0;
}