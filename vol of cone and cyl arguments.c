int main()
         {
             float cyl(float r,float h);
             float r,h;
             printf("enter value of r,h:");
             scanf("%f%f",&r,&h);
             float vol= cyl(r,h);
             printf("\nvolume of cyl=%f",vol);

             float cone(float R,float H);
             float R,H;
             printf("\n\nenter value of R,H:");
             scanf("%f%f",&R,&H);
             float volu= cone(R,H);
             printf("\nvolume of cone=%f",volu);
         }
float cyl(float r,float h)
         {
             float vol=3.14*r*r*h;
             return(vol);
         }
float cone(float R,float H)
         {
             float volu=3.14*R*R*H/3;
             return(volu);
         }

