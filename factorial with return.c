int main()
         {
             int factorial(int n);
             int n,fact=1;
             printf("enter number:");
             scanf("%d",&n);
             int factorial1=factorial(n);
             printf("\nfactorial=%d",factorial1);
         }
int factorial(int n)
         {
             int fact=1,i;
             for(i=1;i<=n;i++)
             {fact=fact*i;}
             return(fact);
         }

