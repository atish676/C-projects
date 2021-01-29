int main()
         {
             int n,i,X[100],count=0,want;
             printf("enter number:");
             scanf("%d",&n);

             for(i=1;i<=n;i++)
             {
                 printf("\nenter value of X[%d] location:",i);
                 scanf("%d",&X[i]);
             }
             printf("\n\nenter value to search:");
             scanf("%d",&want);

             for(i=1;i<=n;i++)
             {
                 if(want==X[i])
                 {
                     printf("\nfound at %d location",i);
                     count++;
                 }
             }
             printf("\n\nfound %d times",count);
         }
