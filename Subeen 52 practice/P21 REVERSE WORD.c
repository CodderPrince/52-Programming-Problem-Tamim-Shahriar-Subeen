#include<stdio.h>
#include<string.h>
int main()
{
    int t;
scanf("%d", &t);
getchar();
while(t--)
{
char str[10001];
char rev[10001];
int i,j=0,len;
gets(str);
len= strlen(str);
for(i=0; i<len; i++)
{
    rev[j]= str[len-1-i];
    j++;
}
    rev[j]='\0';
    printf("%s\n", rev);
}

return 0;
}
