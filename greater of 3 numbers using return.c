int main()
         {
             int greater(int a,int b,int c);
             int a,b,c;
             printf("enter value of a,b,c:");
             scanf("%d%d%d",&a,&b,&c);
             int greater1=greater(a,b,c);
             printf("\ngreatest=%d",greater1);
         }
int greater(int a,int b,int c)
         {
             if(a>b)
             {
                 if(a>c)
                    return(a);
                 else
                    return(c);
             }
             else
             {
                 if(b>c)
                    return(b);
                 else
                    return(c);
             }



         }
