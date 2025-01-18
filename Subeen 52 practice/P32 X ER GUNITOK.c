#include<stdio.h>
#include<math.h>
int t;
scanf("%d",&t);
while(t--)
{
char[10000001];
int i,j,n,x;
scanf("%d %d", &x,&n);
for(j=x; j<=n; j+=x)
{
    printf("%d\n", j);
}
printf("\n");


}
return 0;
}
