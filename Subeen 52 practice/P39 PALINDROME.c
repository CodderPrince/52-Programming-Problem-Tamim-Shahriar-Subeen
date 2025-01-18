#include<stdio.h>

int main()
{
	int i,j,t,n;
	char str[1001],str2[1001];
	scanf("%d", &t);
	getchar();
	while(t--){

		gets(str);
		int l=strlen(str);
		for(i=l-1,j=0;i>=0;i--){
			str2[j]=str[i];
			j++;
		}
		str2[j]='\0';

		if(strcmp(str,str2)==0)
            {
			printf("Yes! It is palindrome!\n");
            }
		else
            {
            printf("Sorry! It is not palindrome!\n");
            }
	}
	return 0;
}
