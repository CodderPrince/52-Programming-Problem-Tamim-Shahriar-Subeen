#include<stdio.h>
#include<string.h>
int main()
{
int t;
char str[1001];
scanf("%d", &t);
getchar();
while(t--)
{
gets(str);
int i, count[26];

for(i=0; i<=25; i++)
{
count[i]=0;
}
for(i=0; i<strlen(str); i++)
{
if(str[i]>='a' && str[i]<='z')
{
count[str[i]-'a']++;
}
}
for(i=0; i<=25; i++)
{
if(count[i]!=0)
{
printf("%c = %d\n", 'a'+i, count[i]);
}
}
if(t!=0)
{
printf("\n");
}
}
return 0;
}
