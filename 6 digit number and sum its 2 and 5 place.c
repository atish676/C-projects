//6 digit number and sum its 2 and 5 place
int main()
         {
             int n,r1,r2,r3,r4,r5,sum;
             printf("enter 6 digit number:");
             scanf("%d",&n);
             ;r1=n%10;
             ;n=n/10;
             ;r2=n%10;
             ;n=n/10;
             ;r3=n%10;
             ;n=n/10;
             ;r4=n%10;
             ;n=n/10;
             ;r5=n%10;
             ;n=n/10;
             sum=r2+r5;
             printf("\n sum=%d",sum);
         }
