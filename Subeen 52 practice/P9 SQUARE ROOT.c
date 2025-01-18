#include<stdio.h>
int main()
{
    int i,t,n,x;
    scanf("%d", &t);
    for(i=1; i<=t; i++)
    {
        scanf("%d", &n);
        x= sqrt(n);
        if(x*x==n)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }

    }
    return 0;
}
