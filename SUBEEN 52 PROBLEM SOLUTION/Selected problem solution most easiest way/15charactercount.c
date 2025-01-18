/******************************************************
 *    Author:  PRINCE_14                              *
 *          --MD. AN NAHIAN PRINCE                    *
 *          --CSE,BRUR                                *
 *          --FB: https://facebook.com/mdannahian     *
 *            PB: Character Count 1 [15]              *
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
        int i,count[26]={0};
        char str[10001];
        gets(str);
        for(i=0; i<strlen(str); i++)
        {
            if(str[i]>= 'a' && str[i]<= 'z')
            {
                count[str[i]-'a']++;
            }
        }

        for(i=0; i<26; i++)
        {
            if(count[i]!=0)
            {
                printf("%c = %d\n",'a'+i, count[i]);
            }
        }
        printf("\n");
    }

    return 0;
}