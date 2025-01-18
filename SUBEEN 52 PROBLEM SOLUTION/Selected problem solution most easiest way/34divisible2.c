/******************************************************
 *    Author:  PRINCE_14                              *
 *          --MD. AN NAHIAN PRINCE                    *
 *          --CSE,BRUR                                *
 *          --FB: https://facebook.com/mdannahian     *
 *            PB: Divisible 2 [34]                    *
 ******************************************************/

#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        unsigned long long int x,y,len;
        scanf("%llu %llu %llu",&x,&y,&len);
        int i;
        for(i=1; i<=len; i++)
        {
            if(i%x==0 && i%y==0)
            {
                printf("%d\n",i);
            }
        }
        printf("\n");
    }

    return 0;
}