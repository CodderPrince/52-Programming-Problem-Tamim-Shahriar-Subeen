#include<stdio.h>
int main()
{
	int T,n,i,j,flag=0;
	//cin>>T;
	scanf("%d", &T);
	while(T--){
		flag=0;
		///cin>>n;
	scanf("%d", &n);

		for(i=2;i<=n/2;i++){
			if(n%i==0){
				flag++;
				break;
			}
			else flag=0;
		}
		if(flag==0 || n==2)
		//cout<<n<<" is a prime number"<<endl;
		printf("%d is a prime\n",n);
		else
		//cout<<n<<" is not a prime number"<<endl;
		printf("%d is no a prime\n");
	}
}
