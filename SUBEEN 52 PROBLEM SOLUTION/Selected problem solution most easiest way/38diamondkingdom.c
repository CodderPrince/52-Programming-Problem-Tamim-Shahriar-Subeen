/******************************************************
 *    Author:  PRINCE_14                              *
 *          --MD. AN NAHIAN PRINCE                    *
 *          --CSE,BRUR                                *
 *          --FB: https://facebook.com/mdannahian     *
 *            PB: Diamond Kingdom [38]                *
 ******************************************************/

#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int row,col,n,i,x,y;
        scanf("%d %d",&x,&y);
        for(row=0; row<x; row++)
        {
            for(col=0; col<=row; col++)
            {
                printf("%d ",y);
            }
            printf("\n");
        }

        for(row= x-1; row>0; row--)
        {
            for(col=0; col<row; col++)
            {
                printf("%d ",y);
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}