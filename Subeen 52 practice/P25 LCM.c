#include<stdio.h>
int main(){
int t;
scanf("%d", &t);
while(t--)
{
int n1,n2;
int lcm=0, gcd=0;
    scanf("%d %d", &n1, &n2);
    int rem;
    while(n2 != 0)
    {
        rem = n2;
        n2 = n1%n2;

        n1= rem;
    }
    gcd = rem;
    lcm = (n1 * n2)/gcd;
    printf("LCM = %d\n", lcm);
}
return 0;
}
