struct emp
         {
             int id,salary;
         };
int DA,HRA,max,min,total,i,n;
int main()
         {
             struct emp X[100];
             printf("enter number of employees:");
             scanf("%d",&n);

             for(i=0;i<n;i++)
             {
             printf("\n\nenter employee id number and salary:");
             scanf("%d%d",&X[i].id,&X[i].salary);
             DA=X[i].salary/10;
             HRA=X[i].salary/20;
             printf("\nTOTAL SALARY= %d",total=X[i].salary+DA+HRA);
             }

             max=X[0].salary;
             for(i=0;i<n;i++)
             {
             if(max<X[i].salary)
                max=X[i].salary;
             }

            printf("\n\nMAXIMUM SALARY=%d",max);

            min=X[0].salary;
             for(i=0;i<n;i++)
             {
               if(min>X[i].salary)
                 min=X[i].salary;
             }
             printf("\nMINIMUM SALARY=%d",min);
         }
