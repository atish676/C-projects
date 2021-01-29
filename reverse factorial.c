int main()
         {
             int n,i,r,fact=1;

             printf("enter the number:");
             scanf("%d",&n);
             while(n!=0)
             {
              int r=n%10;
              fact=1;
             for(i=1;i<=n;i++)
             {
             fact=fact*i;
             }
             printf("\nFACTORAL of %d= %d",r,fact);
             n=n/10;
             }
         }
