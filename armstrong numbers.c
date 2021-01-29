int main()
         {
             int n,r,rev=0;

             printf("enter number:");
             scanf("%d",&n);

             while(n!=0)
             {
                 r=n%10;
                 switch(r)
                 {
                     case1: printf(" one");
                     break;
                     case2: printf(" two");
                     break;
                     case3: printf(" three");
                     break;
                     case4: printf(" four");
                     break;
                     case5: printf(" five");
                     break;
                     case6: printf(" six");
                     break;
                     case7: printf(" seven");
                     break;
                     case8: printf(" eight");
                     break;
                     case9: printf(" nine");
                     break;
                     case0: printf(" zero");
                     break;
                     default:printf(" nothing");
                     break;
                 }
                 rev=rev*10+r;
                 n=n/10;
             }
             printf("\nreverse=%d",rev);
         }
