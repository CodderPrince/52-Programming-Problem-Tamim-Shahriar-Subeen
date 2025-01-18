#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int i,j=0;
        char str[1002],re[1002];
        scanf(" %[^\n]",str);
        for(i=0; i<strlen(str); i++)
        {
            if(str[i]!=' ')
            {
                re[j]= str[i];
                j++;
            }
            else if(j>0)
            {
                re[j]='\0';
                reverse(re);
                j=0;
                printf(" ");
            }
            else{

                printf(" ");
            }
        }
        if(j>0)
        {
            re[j]='\0';
            reverse(re);
        }
        printf("\n");

    }
    return 0;
}
void reverse (char r[])
{
    int k;
    for(k=strlen(r)-1; k>=0; k--)
    {
        printf("%c",r[k]);
    }
}
