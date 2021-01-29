struct volume
         {
             int r,h;
             float v;
         };

int main()
         {
             struct volume cyl,*P;
             P=&cyl;

             printf("enter value of r and h:");
             scanf("%d%d",&cyl.r,&cyl.h);
             (*P).v=3.14*(*P).r*(*P).r*(*P).h;
             printf("\n\nVOLUME=%f",(*P).v);
         }
