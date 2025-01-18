/******************************************************
 *    Author:  PRINCE_14                              *
 *          --MD. AN NAHIAN PRINCE                    *
 *          --CSE,BRUR                                *
 *          --FB: https://facebook.com/mdannahian     *
 *            PB: Letter to Number [23]               *
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
        int i;
        char str[101];
        gets(str);
        for(i=0; i<strlen(str); i++)
        {
            if(str[i]>='A' && str[i]<='Z')
            {
                printf("%d",str[i]-64);
            }
        }
        printf("\n");
    }

    return 0;
}