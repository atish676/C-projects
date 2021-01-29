int main()
         {
             int n,c,mul=0;
             printf("enter your number:");
             scanf("%d",&n);

             for(c=1;c<=n;c++)
             {
                 mul=mul+c;
             }
             printf("\nfactorial=%d",mul);
         }
