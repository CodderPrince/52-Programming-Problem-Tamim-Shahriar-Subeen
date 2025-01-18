#include<stdio.h>
int main()
{
	int odd[21],even[21],t,n,i,j;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		//cout<<"1"<<endl;
		//cout<<1<<" "<<1<<endl;
		printf("1");
		printf(" " " 1");
		even[0]=1;
		even[1]=1;
		odd[0]=1;
		odd[1]=1;
		for(i=3;i<=n;i++){
			if(i%2==0){
				even[0]=1;
				//cout<<1<<" ";
				printf(" 1 " " ");
				for(j=1;j<i-1;j++){
					even[j]=odd[j-1]+odd[j];
					//cout<<even[j]<<" ";
					printf("%d",even[j]);
				}
				even[j]=1;
				//cout<<even[j]<<endl;
				printf("%d", even[j]);
			}
			else{
				odd[0]=1;
				//cout<<1<<" ";
				printf("1 " " ");
				for(j=1;j<i-1;j++){
					odd[j]=even[j-1]+even[j];
					//cout<<odd[j]<<" ";
					printf("%d",odd[j]);
				}
				odd[j]=1;
				//cout<<odd[j]<<endl;
				printf("%d",odd[j]);
			}
		}

	}
	return 0;

}
