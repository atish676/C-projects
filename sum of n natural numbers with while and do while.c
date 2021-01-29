int main()
         {
             int n,i=1,sum=0;
             printf("type the number:");
             scanf("%d",&n);

             while(i<=n)
             {
                 sum=sum+i;
                 i++;
             }
             printf("\nsum=%d",sum);

             do{sum=sum+i;
                i++;}while(i<=n);

               printf("\nsum=%d",sum);


         }
