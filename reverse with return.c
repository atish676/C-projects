int main()
         {
             int reverse(int n);
             int rev=0,n;
             printf("enter the number:");
             scanf("%d",&n);
             int reverse1=reverse(n);
             printf("\nreverse=%d",reverse1);
         }
int reverse(int n)
         {
             int rev=0,r;
             while(n!=0)
             {
                 r=n%10;
                 rev=rev*10+r;
                 n=n/10;
             }
            return(rev);
         }
