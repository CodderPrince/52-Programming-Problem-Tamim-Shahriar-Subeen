/******************************************************
 *    Author:  PRINCE_14                              *
 *          --MD. AN NAHIAN PRINCE                    *
 *          --CSE,BRUR                                *
 *          --ID: 12105007                            *
 *            PB: Number Disaster [37]                *
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
        char str[1001];
        gets(str);
        printf("%s\n",strrev(str));
    }

    return 0;
}