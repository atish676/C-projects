#include<stdio.h>
int serach(int X[],int n,int num)
         {
             int i;
             for(i=1;i<=n;i++)
             {
                 if(X[i]==num)
                    return i;
             }
             return 0;
         }
int main()
         {
             int n;
             scanf("%d",&n);
             int X[n],i,j,num,result;
             for(i=1;i<=n;i++)
                scanf("%d",&X[i]);
             scanf("%d",&num);
             result = serach(X,n,num);
             if(result==0)
                printf("Number not available");
             else
                printf("Present at position %d",result);

             /*for(i=1;i<=n;i++)
             {
                 if(X[i]==num)
                    j=i;
             }
             if(X[j]==num)
                printf("Number available at position %d .",j);
             else
                printf("Not");*/
         }
