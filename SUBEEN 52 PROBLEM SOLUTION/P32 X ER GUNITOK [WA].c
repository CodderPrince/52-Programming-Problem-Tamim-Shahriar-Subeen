#include<stdio.h>
#include<math.h>
int main(){
	int T,x,y,a,i,j;

	scanf("%d", &T);

	for(i=0;i<T;i++){

		scanf("%d %d", &x, &y);
		if(x>y){

			printf("Invalid!\n");
			break;
		}
		else{
			a=y/x;
			for(j=1;j<=a;j++){

				printf("%d\n",x*j);
			}
		}
		printf("\n");
	}
	return 0;
}
