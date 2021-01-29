int main()
         {
             float a,b,c,*Pc,*Pa,*Pb;
             printf("enter value of a and b:");
             scanf("%f%f",&a,&b);

             Pa=&a;
             Pb=&b;
             Pc=&c;
             *Pc=*Pa+*Pb;
             printf("\n\nSum=%f",c);


         }
