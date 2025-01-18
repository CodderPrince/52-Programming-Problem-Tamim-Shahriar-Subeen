#include<stdio.h>
int main()
{
    int i,t,a,b,c,n;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%d %d %d", &a, &b, &c);

        if(a>b)
        {
            n=a;
            a=b;
            b=n;
        }
        if(a>c)
        {
            n=a;
            a=c;
            c=n;
        }
         if(b>c)
        {
            n=b;
            b=c;
            c=n;
        }

        printf("Case %d: ",i);
        printf("%d %d %d\n", a,b,c);

    }
return 0;
}
