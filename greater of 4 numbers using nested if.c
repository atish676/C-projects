int main()
         {
             int a,b,c,d;
             printf("enter value of a,b,c,d:");
             scanf("%d%d%d%d",&a,&b,&c,&d);

             if(a>b)
             {
                 if(a>c)
                 {
                     if(a>d)
                     {
                         printf("\na is greatest");
                     }
                     else
                     {
                         printf("\nd is greatest");
                     }
                 }else
                     {
                         printf("\nc is greatest");
                     }
                 }
                 else
                 {
                     if(b>c)
                     {
                         if(b>d)
                         {
                             printf("\nb is greatest");
                         }
                         else
                         {
                             printf("\nd is greatest");
                         }
                     }else
                         {
                             if(c>d)
                             {
                                 printf("\nc is greatest");
                             }
                             else
                             {
                                 printf("\nd is greatest");
                             }
                         }
                     }
                 }


