#include <stdio.h>
#include <string.h>
void main()
{
  char name[25][50],temp[25];
  int n,i,j;
  int t;
  scanf("%d", &t);
  while(t--)
  {
      int swap=0;

  scanf("%d",&n);
  for(i=0;i<=n;i++)
  {

       fgets(name[i], sizeof name, stdin);
  }

     for(i=1;i<=n;i++)
	for(j=0;j<=n-i;j++)
    {
	  if(strcmp(name[j],name[j+1])>0)
	  {
            strcpy(temp,name[j]);
	    strcpy(name[j],name[j+1]);
	    strcpy(name[j+1],temp);
	    swap =1;
	  }
    }
    if(swap==0)
    {
        break;
    }

	      for(i=0;i<=n;i++)
		 printf("%s",name[i]);
  }
  return 0;

}
