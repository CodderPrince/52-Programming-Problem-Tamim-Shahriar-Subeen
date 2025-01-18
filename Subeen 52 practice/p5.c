#include<stdio.h>
int main(){
int i,j,t,n,k;
scanf("%d",&t);
for(k=1; k<=t; k++)
{
scanf("%d",&n);
for(i=1; i<=n; i++)
{
for(j=1; j<=n; j++)
{
printf("*");

}
printf("\n");
}
if(t!=k)
{
    printf("\n");
}
}
return 0;
}
