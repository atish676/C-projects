//calculate everything
//v=3.14*r*r*h
//c=3.14*r*r
//s=h*h
//t=p+y+m/100
//x=t*100/1000
int main()
         {
             float v,r,h,c,s,t,p,y,m,x;
             printf("value of radius:");
             scanf("%f",&r);
             printf("value of height:");
             scanf("%f",&h);

             v=3.14*r*r*h;
             c=3.14*r*r;
             s=h*h;
             p=v;
             y=c;
             m=s;
             t=(p+y+m)/100;
             x=t*100/500;
             printf("v=%f\n",v);
             printf("c=%f\n",c);
             printf("s=%f\n",s);
             printf("p=%f\n",v);
             printf("y=%f\n",c);
             printf("m=%f\n",s);
             printf("t=%f\n",t);
             printf("x=%f\n",x);
             printf("\nvolume of cylinder=%f \nradius of cylinder=%f \nheight of cylinder=%f \narea of circle=%f \narea of square=%f \ntotal marks=%f \nphysics marks=%f \nchemistry marks=%f \nmaths marks=%f \npercent age=%f\n",v,r,h,c,s,t,p,y,m,x);
         }
