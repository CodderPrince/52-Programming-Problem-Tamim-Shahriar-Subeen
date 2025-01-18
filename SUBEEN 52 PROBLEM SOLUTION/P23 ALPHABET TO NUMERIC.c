#include<stdio.h>
int main()
{
int t;
scanf("%d", &t);
getchar();
while(t--)
{
char str[101];
gets(str);
int i;
for(i=0; str[i]!= '\0'; i++)
{
if(str[i]>= 'A' && str[i]<= 'Z')
{
    printf("%d", str[i]-64);
}
}
printf("\n");

}
return 0;
}
