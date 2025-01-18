#include<stdio.h>
int main()
{
    int i, t,x;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%d",&x);
        if(x%2==0)
        {
            printf("even\n");
        }
        else
        {
            printf("odd\n");
        }

    }

    return 0;
}
