int main()
         {
             int r,c;

             for(r=65;r<=68;r++)
             {
                 for(c=65;c<=r;c++)
                 {
                     printf("%d ",c);
                 }
                 printf("\n");
             }
             printf("\n\n");

             for(r=65;r<=68;r++)
             {
                 for(c=65;c<=r;c++)
                 {
                     printf("%c ",c);
                 }
                 printf("\n");
             }
             printf("\n\n");

             for(r=1;r<=4;r++)
             {
                 for(c=4;c>=r;c--)
                 {
                     printf("* ");
                 }
                 printf("\n");
             }
             printf("\n\n");

             for(r=1;r<=5;r++)
             {
                 for(c=5;c>=r;c--)
                 {
                     printf("%d ",c);
                 }
                 printf("\n");
             }
         }
