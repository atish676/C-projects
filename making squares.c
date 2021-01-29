int main()
         {
             int r,c,n;
             printf("enter number:");
             scanf("%d",&n);

             for(r=1;r<=n;r++)
             {
                printf("* ");

                 for(c=1;c<=4;c++)
                 {
                     printf("$ ");
                 }
                 printf("# \n");
             }
             printf("\n\n");

             for(r=1;r<=n;r++)
             {
                 for(c=65;c<=68;c++)
                 {
                     printf("%d ",c);
                 }
                 printf("\n");
             }
             printf("\n\n");

             for(r=1;r<=n;r++)
             {
                 for(c=65;c<=68;c++)
                 {
                     printf("%c ",c);
                 }
                 printf("\n");
             }
             printf("\n\n");

             for(r=1;r<=4;r++)
             {
                 for(c=5;c>=1;c--)
                 {
                     printf("%d ",c);
                 }
                 printf("\n");
             }



         }
