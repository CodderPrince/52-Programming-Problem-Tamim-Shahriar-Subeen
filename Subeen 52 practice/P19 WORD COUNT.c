#include<stdio.h>
int main()
{
int t;
scanf("%d", &t);
getchar();
while(t--){
char str[10001];
gets(str);
int count=0;
char*token= strtok(str, " ");
while(token!=0)
{
    count++;
    token= strtok(0," ");
}
printf("Count = %d\n", count);

}
return 0;
}
