/******************************************************
 *    Author:  PRINCE_14                              *
 *          --MD. AN NAHIAN PRINCE                    *
 *          --CSE,BRUR                                *
 *          --FB: https://facebook.com/mdannahian     *
 *            PB: Sorting Words [36]                  *
 ******************************************************/

#include<stdio.h>
#include<string.h>

int main()
{
    int t;
    scanf("%d",&t);
    getchar();
    while(t--)
    {
        int n;
        scanf("%d",&n);
        char str [n][100001];
        int i,j;
        for(i=0; i<n; i++)
        {
            scanf("%s",str[i]);
        }

        for(i=0; i<n; i++)
        {
            for(j=i+1; j<n; j++)
            {
                if(strcmp(str[i],str[j])>0)
                {
                    char temp[100001];
                    strcpy(temp,str[i]);
                    strcpy(str[i],str[j]);
                    strcpy(str[j],temp);
                }
            }
        }

        for(i=0; i<n; i++)
        {
            printf("%s\n",str[i]);
        }
    }

    return 0;
}