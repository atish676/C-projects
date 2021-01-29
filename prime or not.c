int main()
         {
             int n,i,spy=1;
             printf("enter number:");
             scanf("%d",&n);

             for(i=2;i<n;i++)
             {
                 if(n%i==0)
                 {
                 spy=0;
                 break;
                 }
             }
             if(spy==0)
                printf("\n\nnot prime");
             else
                printf("\nprime");
         }
