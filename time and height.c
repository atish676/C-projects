struct th
         {
             int inch,min;
         };
int hours,minutes,foot,inch,diff;
int main()
         {
             int height();
             height();
             struct th A,B;
             printf("\n\nenter time of clock A and B in minutes:");
             scanf("%d%d",&A.min,&B.min);
             printf("\nDIFFERENCE=%d",diff=abs(A.min-B.min));
             printf("\n\nHOURS=%d",hours=abs(diff/60));
             printf("\nMINUTES=%d",minutes=abs(diff%60));
         }
int height()
         {
            struct th A,B;
             printf("enter height of persons A and B in inches:");
             scanf("%d%d",&A.inch,&B.inch);
             printf("\nDIFFERENCE=%d",diff=abs(A.inch-B.inch));
             printf("\n\nFOOT=%d",foot=abs(diff/15));
             printf("\nINCHES=%d",inch=abs(diff%15));

         }
