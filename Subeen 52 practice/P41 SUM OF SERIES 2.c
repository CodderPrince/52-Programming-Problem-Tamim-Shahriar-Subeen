#include<stdio.h>
long long int fact(long long int n){
	long long int product=1,i;
    for(i=n;i>=1;i--){
    	product*=i;
	}
	return product;
}

int main()
{
	int t;
	long long int n;
	double sum=0.0;
	scanf("%d",&t);

	while(t--){
		scanf("%d", &n);
		sum=0.0;
		for(int j=1;j<=n;j++){
			sum+=(double)j/fact(j);
		}
		printf("%0.4lf\n",sum);
	}
}
