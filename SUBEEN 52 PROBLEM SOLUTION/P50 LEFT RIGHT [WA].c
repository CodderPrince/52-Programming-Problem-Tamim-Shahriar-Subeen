#include<stdio.h>
#include<string.h>

int main()
{
	int T;
	char str[30],str2[30];
	scanf("%d", &T);
	while(T--){
		scanf("%s",&str);
		int l=strlen(str);
		for(int i=0;i<l;i++){
			if(str[i]=='L'){
				str2[i]=str[i-1];

			}
			else if(str[i]=='R'){
				str2[i]=str[i+1];
			}
			else
			str2[i]=str[i];

		}
		puts(str2);
	}
}
