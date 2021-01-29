//declare only n plz, no need of others
int main()
         {
           int reverse(int n);
           int n;
           printf("enter number:");
           scanf("%d",&n);
           int rev= reverse(n);
           printf("\n reverse=%d",rev);
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
