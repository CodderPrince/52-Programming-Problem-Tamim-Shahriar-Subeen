/******************************************************
 *    Author:  PRINCE_14                              *
 *          --MD. AN NAHIAN PRINCE                    *
 *          --CSE,BRUR                                *
 *          --FB: https://facebook.com/mdannahian     *
 *            PB: Count Numbers 1 [7]                 *
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
        char str[100001];
        gets(str);
        int i, count=1;
        for(i=0; i<strlen(str); i++)
        {
            if(str[i]!= ' ' && str[i+1]== ' ')
            {
                count++;
            }
        }
        printf("%d\n",count);
    }

    return 0;
}