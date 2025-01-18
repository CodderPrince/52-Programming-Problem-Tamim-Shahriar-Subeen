#include<stdio.h>
int main()
{
	int n,i,a,ara[1001],flag=0;
    scanf("%d", &n);
	while(n--)
    {
        scanf("%d", &a);
		for(i=0;i<a;i++)
		{
        scanf("%d", &ara[i]);
		}
		for(int j=0;j<a-1;j++)
		{
			if(ara[j]>ara[j+1])
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
        {
            printf("YES\n");
        }
		else
        {
            printf("NO\n");
        }
	}
	return 0;
    }
