#include<stdio.h>
#include<stdlib.h>
int main()
         {
             int *arr,n,i,j;
             scanf("%d",&n);
             arr=(int*)calloc(n,sizeof(int));
             for(i=1;i<=n;i++)
                scanf("%d",&arr[i]);
             for(i=1;i<n;i++)
             {
                 for(j=1;j<n;j++)
                 {
                     if(arr[j]>arr[j+1])
                     {
                         arr[j]^=arr[j+1]^=arr[j]^=arr[j+1];
                     }
                 }
             }
             for(i=1;i<=n;i++)
                printf("%d ",arr[i]);
         }
