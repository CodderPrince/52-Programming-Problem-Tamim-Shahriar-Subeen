#include<stdio.h>
int main(){
	int T,n,i,j,ara[100001],found=0;
scanf("%d", &T);
	while(T--){
		scanf("%d",&n);
		for(i=1;i<=n-1;i++){
			scanf("%d",ara[i]);
		}
		for(j=1;j<=n;j++){
			found=0;
			for(int s=1;s<=n-1;s++){
				if(j==ara[s]){
					found=1;
				}
			}
			if(found==0){
				printf("%d",j);
			}
		}
	}
	return 0;
}
