int main()
         {
             int n,r1,r2,r3,sum,reverse;
             printf("enter the number:");
             scanf("%d",&n);

             r1=n%10;
             n=n/10;
             r2=n%10;
             n=n/10;
             r3=n%10;
             n=n/10;
             reverse=r1*1000+r2*100+r3*10+n*1;
             printf("\nreverse=%d",reverse);
             printf("\n\nsum=%d",sum=r1+r2+r3+n);
         }
