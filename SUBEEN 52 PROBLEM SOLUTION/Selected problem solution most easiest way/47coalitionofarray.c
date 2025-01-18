/******************************************************
 *    Author:  PRINCE_14                              *
 *          --MD. AN NAHIAN PRINCE                    *
 *          --CSE,BRUR                                *
 *          --FB: https://facebook.com/mdannahian     *
 *            PB: Coalition of Array [47]             *
 ******************************************************/

#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int i,j,k,x,y;
        scanf("%d",&x);
        int arr1[x];
        for(i=0; i<x; i++)
        {
            scanf("%d",&arr1[i]);
        }
        scanf("%d",&y);
        int arr2[y];
        for(j=0; j<y; j++)
        {
            scanf("%d",&arr2[j]);
        }

        int temp[x+y];
        for(i=0,j=0,k=0; i<x && j<y; k++)
        {
            if(arr1[i] < arr2[j])
            {
                temp[k] = arr1[i];
                i++;
            }
            else
            {
                temp[k] = arr2[j];
                j++;
            }
        }

        while(i<x)
        {
            temp[k] = arr1[i];
            i++;
            k++;
        }
        while(j<y)
        {
            temp[k] = arr2[j];
            j++;
            k++;
        }

        for(k=0; k<(x+y); k++)
        {
            printf("%d ",temp[k]);
        }
        printf("\n");
    }

    return 0;
}