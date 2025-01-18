#include<stdio.h>
#include<string.h>
int main(){
int t;
scanf("%d", &t);
getchar();
while(t--)
{
int i;
char str[10001], ch[2];
int count=0;
gets(str);
gets(ch);
for(i=0; i<=strlen(str); i++)
{
if(str[i]== ch[0])
{
    count++;
}
}
if(count>0)
{
printf("Occurrence of '%c' in '%s' = %d\n", ch[0],str,count);
}
else
{
printf("'%c' is not present\n",ch[0]);
}
}
return 0;
}


