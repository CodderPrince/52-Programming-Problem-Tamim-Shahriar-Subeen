#include<stdio.h>
int main()
{
int i,t;
scanf("%d",&t);
for(i=1; i<=t; i++)
{
int s1,s2,n;
scanf("%d",&n);
s1 = n%10;
s2= n/10000;
printf("Sum = %d\n", s1+s2);
}

return 0;
}
