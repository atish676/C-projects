int main()
         {
             int n,c,sal,salary=0;
             printf("enter number of employees:");
             scanf("%d",&n);

             for(c=1;c<=n;c++)
             {
                 printf("\nenter salary of %d employee=",c);
                 scanf("%d",&sal);
                 salary=salary+sal;
             }
             printf("\n\nTotal salary=%d",salary);





         }
