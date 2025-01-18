/******************************************************
 *    Author:  PRINCE_14                              *
 *          --MD. AN NAHIAN PRINCE                    *
 *          --CSE,BRUR                                *
 *          --FB: https://facebook.com/mdannahian     *
 *            PB: Vowel - Consonant [18]              *
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
        char str[100001];
        gets(str);
        for(i=0; i<strlen(str); i++)
        {
            if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
            {
                printf("%c",str[i]);
            }
        }
        printf("\n");


        for(i=0; i<strlen(str); i++)
        {
           if(str[i]!='a' && str[i]!='e' && str[i]!='i' && str[i]!='o' && str[i]!='u' && str[i]!=' ')
           {
                printf("%c",str[i]);
           }
        }
        printf("\n");
    }

    return 0;
}