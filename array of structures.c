struct student
         {
             int roll,e,m,total; float per;
         };
int i,n; float sum=0,avg;
int main()
         {
             struct student X[100];
             printf("enter number of students:");
             scanf("%d",&n);
             for(i=0;i<n;i++)
             {
             printf("\n\nenter roll number of %d student with e and m marks:",i);
             scanf("%d%d%d",&X[i].roll,&X[i].e,&X[i].m);
             }

             printf("\n==RESULTS==");
             for(i=0;i<n;i++)
             {
              printf("\nTOTAL and PER of %d roll student=%d, %f",i,X[i].total=X[i].e+X[i].m,X[i].per=X[i].e+X[i].m/2);
              sum=sum+X[i].per;
             }
             printf("\n\nAVERAGE marks=%f",avg=sum/n);
         }
