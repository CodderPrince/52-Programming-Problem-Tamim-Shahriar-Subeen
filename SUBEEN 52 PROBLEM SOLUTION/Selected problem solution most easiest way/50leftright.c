/******************************************************
 *    Author:  PRINCE_14                              *
 *          --MD. AN NAHIAN PRINCE                    *
 *          --CSE,BRUR                                *
 *          --FB: https://facebook.com/mdannahian     *
 *            PB: Left Right [50]                     *
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
        char str1[50],str2[50];
        int i,j;
        gets(str1);
        for(i=0; i<strlen(str1); i++)
        {
            if(str1[i]=='L')
            {
                str2[i] = str1[i-1];
            }
            else if(str1[i]=='R')
            {
                str2[i] = str1[i+1];
            }
            else
            {
                str2[i] = str1[i];
            }
        }
        str2[strlen(str1)]='\0';
        printf("%s\n",str2);
    }

    return 0;
}