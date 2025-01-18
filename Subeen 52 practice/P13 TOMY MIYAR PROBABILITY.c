#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//this function is used for returning factorial of a number
unsigned long long fact(int num)
{
    int j;
    unsigned long long total=1;
    for(j=1; j<=num; j++)
    {
        total*=j;
    }
    return total;
}

int main()
{

    int n;
    scanf("%d",&n);
    int i;
    //used for flushing unwanted keypress '\n'
    getchar();
    //used for test cases
    for(i=0; i<n; i++)
    {
        char str[300];
        //taking input string
        gets(str);
        char str2[300];
        //copying string to str2
        strcpy(str2,str);
        char *ptr;
        //working with pointers
        ptr=strtok(str2," ");
        int num=0;
        while(ptr!=NULL)
        {
            num++;
            ptr=strtok(NULL," ");
        }
        free(ptr);
        unsigned long long total=1;
        //storing factorial of num to total
        total=fact(num);
        int j=0;
        char *ptr2;
        char str3[num][30];
        ptr2=strtok(str," ");
        while(ptr2!=NULL)
        {
            strcpy(str3[j++],ptr2);
            ptr2=strtok(NULL," ");

        }
        free(ptr2);
        int ara[num];
        memset(ara,0,sizeof(ara));

        //checking how much word are same and then updating value of total
        for(j=0; j<num; j++)
        {
            int k;
            int cnt=1;
            if(ara[j]==0)
                for(k=j+1; k<num; k++)
                {
                    if(strcmp(str3[j],str3[k])==0)
                    {
                        ara[j]=1;
                        ara[k]=1;
                        cnt++;
                    }
                }
            total/=fact(cnt);

        }
        //printing output
        printf("%d/%llu\n",1,total);
    }

    return 0;
}
