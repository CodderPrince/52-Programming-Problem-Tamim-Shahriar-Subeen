// C Program to Check if Array is Sorted
#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
     //int A[]={1, 2, 3, 4},i,flag = 0;
     //int n = sizeof(A) / sizeof(A[0]);
     //printf("Array A :--> ");
     int A[1000], flag=0;
     int i,n;
     scanf("%d", &n);
     for(i=0; i<n; i++)
        //printf("%d  ", A[i]);
     for(i = 0;i < n - 1; i++)
     {
          if(A[i] > A[i+1])
          {
               flag = 1;
               break;
          }
     }
     if(flag == 0)
     {
          printf("Array is sorted\n");
     }
     else
     {
          printf("Array is not sorted\n");
     }
    }
     return 0;
}
