int main()
         {
             void greater();
             greater();
             void fact();
             fact();
         }
void greater()
             {
                 int a,b;
                 printf("enter the two numbers:");
                 scanf("%d%d",&a,&b);

                 if(a>b)
                    printf("\na is greater");
                 else
                    printf("\nb is greater");
             }
void fact()
          {
              int n,i,fac=1;
              printf("\n\nenter the number:");
              scanf("%d",&n);

              for(i=1;i<=n;i++)
                printf("\nfactorial=%d",fac=fac*i);
          }
