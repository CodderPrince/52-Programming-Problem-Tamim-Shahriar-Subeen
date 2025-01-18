#include<stdio.h>
int main()
{
	int t,p,q,c,i;
	double s;
	scanf("%d", &t);
	while(t--){

		scanf("%d %d %d", &p, &q, &c);
		int temp =1;
		for (int j=1; j<=q; j++)
        {
            temp *=p;
        }
        int res = temp%c;

		printf("Result = %d\n",res);
	}
}
