#include<stdio.h>

int main()
{
	int t,x,k,sum=0;

	scanf("%d", &t);

	while(t--){
		sum=0;
		scanf("%d %d", &x, &k);
		for(int i=0;i<=k;i++){
			sum+=pow(x,i);
		}

		printf("Result = %d\n", sum);
	}
	return 0;
}
