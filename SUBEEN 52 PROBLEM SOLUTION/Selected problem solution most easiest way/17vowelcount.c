/******************************************************
 *    Author:  PRINCE_14                              *
 *          --MD. AN NAHIAN PRINCE                    *
 *          --CSE,BRUR                                *
 *          --FB: https://facebook.com/mdannahian     *
 *            PB: Vowel Count 1 [17]                   *
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
        int i,count=0;
        char str[10001];
        gets(str);
        for(i=0; i<strlen(str); i++)
        {
            if(str[i]== 'a' || str[i]== 'e' || str[i]== 'i' || str[i]== 'o' || str[i]== 'u')
            {
                count++;
            }
        }
        printf("Number of vowels = %d\n",count);
    }

    return 0;
}