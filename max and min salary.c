int main()
         {
             int n,i,S[100],max,min;
             printf("enter number of employees<100:");
             scanf("%d",&n);

             for(i=1;i<=n;i++)
             {
                 printf("\nenter value of %d employee salary:",i);
                 scanf("%d",&S[i]);
             }
             max=S[1];
             for(i=1;i<=n;i++)
             {
                 if(max<S[i])
                 {
                     max=S[i];
                 }
             }
             printf("\n\nmaximum value=%d",max);

             min=S[1];
             for(i=1;i<=n;i++)
             {
                 if(min>S[i])
                 {
                     min=S[i];
                 }
             }
             printf("\nminimum value=%d",min);

         }
