#include<stdio.h>
int main(){

int i, t;
scanf("%d", &t);
getchar();
while(t--)
{
char s[10001];
gets(s);
for(i=0; s[i]!='\0'; i++)
{
    if(s[i]=='a' || s[i]== 'e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
{
    printf("%c", s[i]);

}

}
    printf("\n");
for(i=0; s[i]!='\0'; i++)
{
    if(s[i]!='a' && s[i]!= 'e' && s[i]!='i' && s[i]!='o' && s[i]!='u' && s[i]!=' ')
{
    printf("%c", s[i]);

}


}
    printf("\n");
}

    return 0;
}
