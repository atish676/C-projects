#include<stdio.h>
#include<stdlib.h>
int main()
         {
             int *arr,n,i,j;
             scanf("%d",&n);
             arr=(int*)calloc(n,sizeof(int));
             for(i=1;i<=n;i++)
                scanf("%d",&arr[i]);
             for(i=1;i<=n;i++)
             {
                 j=i-1;
                 if(arr[i]<arr[j])
                 {
                     while(j>=1)
                 {
                     arr[i]^=arr[j]^=arr[i]^=arr[j];
                     i--;
                     j--;
                 }
                 }
             }
             for(i=1;i<=n;i++)
                printf("%d ",arr[i]);
         }
