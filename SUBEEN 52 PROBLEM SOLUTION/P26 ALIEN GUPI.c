#include<stdio.h>
int main()
{
int t, count;
double x;
scanf("%d", &t);
while(t--)
{
    scanf("%lf", &x);
    count = 0;
    while(x>1.00)
    {
    x = x/2;
    count++;
    }
    printf("%d days\n", count);
}

return 0;
}
