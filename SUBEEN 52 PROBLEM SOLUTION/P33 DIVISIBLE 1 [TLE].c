#include<stdio.h>
#include<math.h>
int main(){
	int i,j,t;
	long int a,b,c;
	scanf("%d", &t);
	for(i=0;i<t;i++)
	{
		scanf("%ld %ld %ld", &a, &b, &c);
		for(j=a;j<=b;j++){
			if((j%c)==0){
				printf("%ld\n", j);
			}
		}
		printf("\n");
	}
	return 0;
}
