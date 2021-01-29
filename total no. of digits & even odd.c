int main()
         {
             int n,r,photo,count=0,even=0,odd=0;
             printf("enter number:");
             scanf("%d",&n);

             photo=n;
             while(photo!=0)
             {
                 r=photo%10;
                 photo=photo/10;
                 count=count+1;
                 if(r%2==0)
                    even=even+1;
                 else
                    odd=odd+1;
             }
             printf("\n\nNumber of numbers=%d",count);
             printf("\neven=%d & odd=%d",even,odd);
         }
