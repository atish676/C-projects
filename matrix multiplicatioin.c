int main()
         {
             int A[10][10],B[10][10],AB[10][10],r,c,k,sum,rB,rA,cA,cB;
             printf("enter rows and columns of A[][]:");
             scanf("%d%d",&rA,&cA);

             printf("enter rows and columns of B[][]:");
             scanf("%d%d",&rB,&cB);

             if(cA!=rB)
             {
                 printf("wrong order");
             }
             else
             {for(r=0;r<rA;r++)
             {
                 for(c=0;c<cA;c++)
                 {
                     printf("enter value of A[%d][%d] location:",r,c);
                     scanf("%d",&A[r][c]);
                 }
             }

             for(r=0;r<rB;r++)
             {
                 for(c=0;c<cB;c++)
                 {
                     printf("enter value of B[%d][%d] location:",r,c);
                     scanf("%d",&B[r][c]);
                 }
             }

             for(r=0;r<rA;r++)
             {
                 for(c=0;c<cB;c++)
                 {
                     sum=0;
                     for(k=0;k<cA;k++)
                     {
                         sum=sum+A[r][k]*B[k][c];
                     }
                     AB[r][c]=sum;
                 }
             }

             printf("multiplied matrix:");
             printf("\n");
             for(r=0;r<rA;r++)
             {
                 for(c=0;c<cB;c++)
                 {
                     printf("%d ",AB[r][c]);
                 }
                 printf("\n");
             }
             }
         }
