#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
    int n1, n2, lcm,i;
    scanf("%d %d", &n1, &n2);
    if(n1>n2)
    {
        lcm = n1;
    }
    else
    {
        lcm = n2;
    }
    while(t--)
    {
        if( lcm%n1 == 0 && lcm%n2 == 0)
        {
        printf("LCM = %d\n", lcm);
        break;
        }
        lcm++;
    }
    }


return 0;
}
