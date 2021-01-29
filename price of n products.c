int main()
         {
             int n,i,sum=0,avg,P[100],total;
             printf("enter number of products<100:");
             scanf("%d",&n);

             for(i=1;i<=n;i++)
             {
                 printf("\nenter value of %d product:",i);
                 scanf("%d",&P[i]);
                 sum=sum+P[i];
             }
             printf("\n\ntotal=%d",sum);
             printf("\naverage=%d",avg=sum/n);
         }
