#include<stdio.h>
#include<string.h>

int main()
{
    getchar();
	char str[10001],tmp;
	int t,n,i,j;
	int flag=0;
	scanf("%d", &t);

	while(t--){
		scanf("%d", &n);
		for(i=1;i<=n;i++){

			gets(str[i]);
		}

		for(i=0;i<n-1;i++){
			for(j=i+1;j<n;j++){
				if(str[i]>str[j]){
					tmp = str[i];
                        str[i] = str[j];
                            str[j] = tmp;
                            flag = 1;
				}
			}
			if(flag==0)
                break;
            flag=0;
		}

		}
		return 0;
	}


