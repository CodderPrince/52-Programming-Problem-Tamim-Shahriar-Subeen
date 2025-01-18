//#include<bits/stdc++.h>
//#include<cmath>
using namespace std;
int main()
{
    int n,a,i,sum=0,j,x,m,b;
	int T;
	cin>>T;

	for(i=0;i<T;i++){
		cin>>n;
		for(b=1;b<=n;b++){
			sum=1;
			x=sqrt(b);
		for(j=2;j<=x;j++){
			if((b%j)==0){
				sum=sum+j+(b/j);
			}
		}
		if(sum==b && b!=1){
			cout<<b<<endl;
		}
	}


	}
}*/

#include<bits/stdc++.h>
#include<cmath>
using namespace std;

int main()
{
	int n,a,i,sum=0,j,x,m,b;
	int T,ara[5]={6,28,496,8128,33550336};
	cin>>T;

	for(int k=0;k<T;k++){
		cin>>n;
	for(i=0;i<5;i++){
		if(ara[i]<=n){
			cout<<ara[i]<<endl;
		}
		else break;
	}
}
}
