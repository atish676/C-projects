int main()
         {
             int n,A[100],B[100],sum[100],i;
             printf("enter number of values to ask:");
             scanf("%d",&n);

             for(i=1;i<=n;i++)
             {
                 printf("\nenter value at A[%d] location:",i);
                 scanf("%d",&A[i]);
             }
             for(i=1;i<=n;i++)
             {
                 printf("\nenter value at B[%d] location:",i);
                 scanf("%d",&B[i]);
             }
             printf("\nOUTPUT:");
             for(i=1;i<=n;i++)
             {
                 sum[i]=A[i]+B[i];
                 printf("\nsum=%d",sum[i]);
             }
         }
