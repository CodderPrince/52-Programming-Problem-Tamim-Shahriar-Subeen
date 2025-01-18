#include<stdio.h>
#include<string.h>
int main(){
int i,t,len;
scanf("%d", &t);
for(i=1; i<=t; i++)
{
    char s[101];
    scanf("%s",&s);
    len=strlen(s);
    if(s[len-1]%2==0)
    {
        printf("even\n");
    }
    else
    {
        printf("odd\n");

    }

}

return 0;
}
