#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,i,a,ara[1000],flag=0;
	cin>>n;
	while(n--){
	  cin>>a;
		for(i=1;i<=a;i++){
			cin>>ara[i];
		}
		for(int j=1;j<=a;j++){
			if(ara[j]<ara[j-1]){
				flag=1;
				break;
			}
		}
		if(flag==1)
		cout<<"NO"<<endl;
		else cout<<"YES"<<endl;
	}
}
