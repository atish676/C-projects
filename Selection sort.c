#include<stdio.h>
#include<stdlib.h>
int main()
         {
             int i,j,n,*arr,min;
             scanf("%d",&n);
             arr=(int*)malloc(n*sizeof(int));
             for(i=1;i<=n;i++)
                scanf("%d",&arr[i]);
             for(i=1;i<n;i++)
             {
                 min=i;
                 for(j=i+1;j<=n;j++)
                 {
                     if(arr[min]>arr[j])
                     {
                         arr[min]^=arr[j]^=arr[min]^=arr[j];
                     }
                 }
             }
             for(i=1;i<=n;i++)
                printf("%d ",arr[i]);
         }
