#include<stdio.h>
int main()
{
    int t;
    char ch;
    scanf("%d", &t);
    getchar();
    while(t--)
    {
    //char ch[10001];
//for(int i=1; i<=t; i++)
    //{
    //scanf("%s", &ch);
    //for(int i=1; i<=ch; i++)
    //while(t--)
    //{
gets(ch);


    if(ch>= 'a' && ch<= 'z')

    printf("Lowercase Character\n");

    else if(ch>= 'A' && ch<= 'Z')

    printf("Uppercase Character\n");

    else if(ch>= '0' && ch<= '9')

    printf("Numerical Digit\n");

    else

    printf("Special Character\n");
    }
    //}
    //}

return 0;
}
