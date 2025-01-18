#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    getchar();
    while(t--)
    {
    //char ch[10001];
    char ch;
    //scanf("%s", &ch);
    gets(ch);
    //for(int i=1; i<=ch; i++)
    //{
    if(ch>= 'a' && ch<= 'z')
    {
    printf("Lowercase Character\n");
    }
    else if(ch>= 'A' && ch<= 'Z')
    {
    printf("Uppercase Character\n");
    }
    else if(ch>= '0' && ch<= '9')
    {
    printf("Numerical Digit\n");
    }
    else
    {
    printf("Special Character\n");
    }
    }
    //}

return 0;
}
