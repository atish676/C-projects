int main()
         {
             int greater(int a,int b);
             int a,b;
             printf("enter a and b:");
             scanf("%d%d",&a,&b);
             int greater1=greater(a,b);
             printf("greater=%d",greater1);

         }
int greater(int a,int b)
         {
             if(a>b)
             {
                 return(a);
             }
            else
             {
                 return(b);
             }
         }
