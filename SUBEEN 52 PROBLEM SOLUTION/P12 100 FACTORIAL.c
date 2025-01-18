#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,i, count=0;
        scanf("%d",&n);
        for(i=5; i<=n; i*=5)
        {
            count= count + n/i;
        }
        printf("%d\n", count);
    }



    return 0;
}
