//#include<bits/stdc++.h>
#include<stdio.h>
//using namespace std;

int main()
{
	int n,i,a,ara[1000],flag=1;
	//cin>>n;
	scanf("%d", &n);
	while(n--){
	  //cin>>a;
	  scanf("%d", &a);
		for(i=1;i<=a;i++){
			//cin>>ara[i];
			scanf("%d", &ara[i]);
		}
		for(int j=1;j<=a;j++){
			if(ara[j]<ara[j-1]){
				flag=0;
				break;
			}
		}
		if(flag==0)
		//cout<<"NO"<<endl;
		printf("NO\n");

		else //cout<<"YES"<<endl;
            printf("YES\n");
	}
}
