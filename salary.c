//salary of  humans
int main()
         {
             float n,s,Tax;
             printf("enter your salary:");
             scanf("%f",&n);

             if(n<300000)
             {
                 Tax=n*10/100;
                 printf("\ntax=%f",Tax);
                 s=n-Tax;
                 printf("\n\nNet salary=%f",s);
             }
             else
                if(n<500000)
             {
                 Tax=n*20/100;
                 printf("\ntax=%f",Tax);
                 s=n-Tax;
                 printf("\n\nNet salary=%f",s);
             }
             else
                if(n<1000000)
             {
                 Tax=n*30/100;
                 printf("\ntax=%f",Tax);
                 s=n-Tax;
                 printf("\n\nNet salary=%f",s);
             }
             else
             {
                 Tax=n*40/100;
                 printf("\ntax=%f",Tax);
                 s=n-Tax;
                 printf("\n\nNet salary=%f",s);
             }
         }
