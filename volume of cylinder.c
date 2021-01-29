//program for calculation of volume of cylinder
//v=3.14*r*r*h
int main()
         {
             float v,r,h;

             printf("value of r:");
             scanf("%f",&r);
             printf("value of h:");
             scanf("%f",&h);

             v=3.14*r*r*h;
             printf("v=%f\n",v);
             printf("%f is volume\n",v);
             printf("r=%f h=%f v=%f\n",r,h,v);
         }
