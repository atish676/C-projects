//reverse of 5 digit number
int main()
         {
             int n,r1,r2,r3,r4,reverse;
             printf("enter 5 digit number:");
             scanf("%d",&n)
             ;r1=n%10;
             ;n=n/10;
             ;r2=n%10;
             ;n=n/10;
             ;r3=n%10;
             ;n=n/10;
             ;r4=n%10;
             ;n=n/10;
             reverse=r1*10000+r2*1000+r3*100+r4*10+n*1;
             printf("\n reverse=%d",reverse);
         }
