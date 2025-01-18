#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
    int n1, n2;
    scanf("%d %d", &n1, &n2);
    int i;
    int mn;
    if(n1<n2)
    {
        mn= n1;
    }
    else
    {
        mn = n2;
    }
    int gcd;
    for(i= mn; i>=1; i--)
    {
        if(n1%i == 0 && n2%i == 0)
        {
        gcd = i;
        break;
        }

    }
    int lcm = (n1*n2)/gcd;
    printf("LCM = %d\n", lcm);


    }
    return 0;
}
