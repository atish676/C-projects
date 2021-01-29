int main()
         {
             int r,c,X[20][20],n;
             printf("enter order:");
             scanf("%d",&n);

             for(r=1;r<=n;r++)
                 {
                     for(c=1;c<=n;c++)
                     {
                     printf("enter value at X[%d][%d] location:",r,c);
                     scanf("%d",&X[r][c]);
                     }
                 }
             printf("OUTPUT:");
             printf("\n");
             for(r=1;r<=n;r++)
             {
                 for(c=1;c<=n;c++)
                 {
                 if(r>=c)
                    printf("%d ",X[r][c]);
                 }
                 printf("\n");
             }

         }
