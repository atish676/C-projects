int main()
         {
             float p,r,t,x;
             float *Pp,*Pr,*Pt,*Px;

             printf("enter value of p,r,t:");
             scanf("%f%f%f",&p,&r,&t);

             Pp=&p;
             Pr=&r;
             Pt=&t;
             Px=&x;
             *Px=*Pp**Pr**Pt/100;
             printf("\n\nSimple Interest=%f",*Px);
         }
