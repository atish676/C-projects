//electricity bill in a different way
int main()
         {
             float units,rpu=3,bill;
             printf("enter units:");
             scanf("%f",&units);

             if(units<=200)
                rpu=2;
             bill=units*rpu;
             printf("\nbill=%f",bill);
         }
