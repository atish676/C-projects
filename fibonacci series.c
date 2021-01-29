int main()
         {
              int a=0,b=1,c=0,n;
              printf("enter series ending number:");
              scanf("%d",&n);

              while(c<=n)
              {
                  a=b;
                  b=c;
                  printf("%d ",c=a+b);
              }
         }
