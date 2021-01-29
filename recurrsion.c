int n,fact;
int main()
         {
             int factorial(int n);
             printf("enter number:");
             scanf("%d",&n);
             fact=factorial(n);
             printf("\nfactorial=%d",fact);
         }
int factorial(int n)
         {
                if(n==1)
                return(1);
             else
                fact=factorial(n-1)*n;
                return(fact);
         }
