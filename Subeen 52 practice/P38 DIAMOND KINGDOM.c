#include<stdio.h>
int main(){
	int T,i,n,m,j;
	scanf("%d", &T);
	while(T--){
		scanf("%d %d", &m, &n);
		for(i=1;i<=n;i++){
			for(j=1;j<=i;j++){
				printf("%d",m);
			}
			printf("\n");
		}

		for(int k=n-1;k>=1;k--){
			for(int l=1;l<=k;l++){
				printf("%d", m);
			}
			printf("\n");
		}
	}
	return 0;
}
