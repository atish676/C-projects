int main()
         {
             void cyl();
             cyl();
             void cone();
             cone();
         }
void cyl()
         {
             float r,h,vol;
             printf("enter value of r and h:");
             scanf("%f%f",&r,&h);
             printf("\nvolume=%f",vol=3.14*r*r*h);
         }
void cone()
          {
              float R,H,volu;
              printf("\n\nenter value of R and H:");
              scanf("%f%f",&R,&H);
              printf("\nvolume=%f",volu=3.14*R*R*H/3);
          }
