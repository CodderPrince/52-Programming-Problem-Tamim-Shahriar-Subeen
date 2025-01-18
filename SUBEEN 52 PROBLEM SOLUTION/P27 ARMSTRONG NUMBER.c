#include<stdio.h>
int main()
{
int t;
scanf("%d", &t);
while(t--)
{
 int num, temp, r, sum=0;
 scanf("%d", &num);
 temp = num;
 while(temp!=0)
 {
    r= temp%10;
    sum = sum+ r*r*r;
    temp = temp/10;
 }
 if(num == sum)
 {
    printf("%d is an armstrong number!\n", num);
 }
 else
 {
    printf("%d is not an armstrong number!\n", num);
 }

}
return 0;
}
