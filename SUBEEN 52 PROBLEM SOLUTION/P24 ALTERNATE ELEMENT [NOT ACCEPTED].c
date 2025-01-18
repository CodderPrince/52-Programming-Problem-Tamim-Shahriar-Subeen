#include<stdio.h>
int main()
{
int t,n;
scanf("%d", &t);
while(t--)
{

int array[1000];
int i;
scanf("%d", &n);
for(i=0; i<n; i++)
{
     scanf("%d", &array[i]);
}
   for(i=0; i<n; i+=2)
   {
       printf("%d ", array[i]);
   }
   printf("\n");
}
return 0;
}
