#include<stdio.h>
int binary(int X[],int n,int mid,int num)
         {
             while(mid>0 && mid<=n)
             {
             if(X[mid]==num)
                return mid;
             else if(num>X[mid])
                binary(X,n,++mid,num);
             else
                binary(X,n,--mid,num);
             }
             return 0;
         }
int main()
         {
             int n,result;
             scanf("%d",&n);
             int X[n],i,mid,num;
             for(i=1;i<=n;i++)
                scanf("%d",&X[i]);
             mid=(n+1)/2;
             scanf("%d",&num);
             result=binary(X,n,mid,num);
             if(result==0)
                printf("Not available");
             else
                printf("Number available at %d",result);
             /*while(mid>0 && mid<=n)
            {
             if(X[mid]==num)
                {
                 printf("Available at %d",mid);
                 break;
                }
             else if(num>X[mid])
                 mid++;
             else
                 mid--;
            }*/
         }
