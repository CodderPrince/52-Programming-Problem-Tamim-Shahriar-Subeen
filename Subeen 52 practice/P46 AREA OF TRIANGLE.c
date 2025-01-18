#include<stdio.h>

int main(){
	int t;
	double area;
    float a,b,c,k,m,n,l;
	scanf("%d",&t);
	while(t--){
	scanf("%f %f %f", &a, &b, &c);
		k=(a+b+c)/2;
		m=(k-a);
		n=(k-b);
		l=(k-c);

		area=sqrt(k*m*n*l);

	printf("Area = %.3lf\n",area);
	}
	return 0;
}
