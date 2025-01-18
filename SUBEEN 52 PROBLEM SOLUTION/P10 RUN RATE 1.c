#include<stdio.h>
int main()
{
int i,t,r1,r2,ball_unplayed, ball_played;
double current_rr, required_rr;
scanf("%d",&t);
for(i=1; i<=t; i++)
{
scanf("%d %d %d", &r1, &r2, &ball_unplayed);
ball_played = 300 - ball_unplayed;
current_rr = r2/(ball_played/6.0);
if(r1<r2)
{
required_rr= 0.00;
}
else
{
required_rr = (r1-r2+1)/(ball_unplayed/6.0);
}
printf("%.2lf %.2lf\n", current_rr, required_rr);
}
return 0;
}
