#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
int a,b,m,n;
scanf("%d %d", &n, &m);
for(a=1; a<=n; a++)
{
    for(b=1; b<=a; b++)
    {
        printf("%d ", m);
    }
    printf("\n");
}


for(a=1; a<=n; a++)
{
    for(b=a; b<=n; b++)
    {
        printf("%d ", m);
    }
    printf("\n");
}
printf("\n");
    }
return 0;
}
