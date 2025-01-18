#include<stdio.h>
int main()
{
int t;
scanf("%d", &t);
while(t--)
{
char str[1002];
int count=0;
scanf(" %[^\n]",str);
printCount(str,count);
}
return 0;
}
void printCount(char s[], int c)
{
int i;
for(i=0; i<strlen(s); i++)
{
if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' )
{
c++;
}
}
printf("Number of vowels = %d\n",c);
}
