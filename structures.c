struct student
         {
             int roll,e,m; float per;
         };
int main()
         {
             struct student A,B;
             printf("enter roll and e,m marks of A: ");
             scanf("%d%d%d",&A.roll,&A.e,&A.m);
             printf("\nA's percentage=%f",A.per=(A.e+A.m)/2);

             printf("\nenter roll and e,m marks of B: ");
             scanf("%d%d%d",&B.roll,&B.e,&B.m);
             printf("\nB's percentage=%f",B.per=(B.e+B.m)/2);
         }
