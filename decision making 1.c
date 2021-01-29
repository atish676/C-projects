//decision making 1
//c=3.14*r*r
//cyl=3.14*r*r*h
int main()
         {
             float c,r,h,cyl;

             printf("enter r:");
             scanf("%f",&r);
             printf("enter h:");
             scanf("%f",&h);

             if(r<=10)
             {
                 c=3.14*r*r;
                 printf("\narea of circle=%f",c);
             }
             else
             {
                 cyl=3.14*r*r*h;
                 printf("\nvolume of cylinder=%f",cyl);
             }
         }
