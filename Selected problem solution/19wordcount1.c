/******************************************************
 *    Author:  PRINCE_14                              *
 *          --MD. AN NAHIAN PRINCE                    *
 *          --CSE,BRUR                                *
 *          --ID: 12105007                            *
 *            PB: Word Count 1 [19]                   *
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
        int count=0,i;
        char str[100001];
        gets(str);
        for(i=0; i<strlen(str); i++)
        {
            if(str[i] == ' ')
            {
                count++;
            }
        }
        printf("Count = %d\n",count+1);
    }

    return 0;
}