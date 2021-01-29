//program for calculation of total and percentage
//t=p+c+m/100
//a=t*100/300

int main()
         {
             float p,c,m,t,a;

             printf("value of p:");
             scanf("%f",&p);
             printf("value of c:");
             scanf("%f",&c);
             printf("value of m:");
             scanf("%f",&m);

             t=p+c+m/100;
             a=t*100/300;

             printf("t=%f\n",t);
             printf("a=%f\n",a);
             printf("p=%f c=%f m=%f t=%f a=%f\n",p,c,m,t,a);
         }
