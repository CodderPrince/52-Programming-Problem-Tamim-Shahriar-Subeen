//#include<bits/stdc++.h>
//#include<cmath>
//using namespace std;
#include<stdio.h>
#include<math.h>
int main()
{
	int n,a,i,sum=0,j,x,m,b;
	int T,ara[5]={6,28,496,8128,33550336};
	//cin>>T;
	scanf("%d", &T);

	for(int k=0;k<T;k++){
		//cin>>n;
		scanf("%d", &n);
	for(i=0;i<5;i++){
		if(ara[i]<=n){
			//cout<<ara[i]<<endl;
			printf("%d\n", ara[i]);
		}
		else
		{
            break;
		}
	}
	printf("\n");
}
return 0;
}
