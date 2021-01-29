//electricity bill calculator
void main()
         {
             float bill,gst,total,units;
             printf("enter consumed units:");
             scanf("%f",&units);

             if(units<1000)
             {
                 bill=units*5;
                 printf("bill=%f",bill);
                 printf("\nthank you for saving environment!");
             }
             else
             {
                 bill=units*10;
                 printf("bill=%f",bill);
                 printf("\nthank you for making us rich!");
             }
             gst=bill*18/100;
             printf("\ngst=%f",gst);
             total=bill+gst;
             printf("\ntotal=%f",&total);
         }
