#include<stdio.h>
int main()
{
int t;
scanf("%d", &t);
while(t--)
{
 int row, col,m,n;
 scanf("%d %d", &m, &n);
 for(row=1; row<=m; row++)
 {
    for(col=1; col<=m; col++)
    {
        printf("%d",m);
    }
    printf("\n");
    }
    for(row= m-1; row<=m; row++)
    {
    for(col=row; col<=m; col++)
    {
    printf("%d",m);
    }
    printf("\n");
    }
 }
return 0;
}
