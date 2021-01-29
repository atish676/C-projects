int main()
         {
             void swap(int x,int y);
             int a,b;
             printf("enter value of a and b:");
             scanf("%d%d",&a,&b);
             swap(a,b);
             printf("\n a=%d b=%d",a,b);
         }
void swap(int x,int y)
         {
             int c=x;
                 x=y;
                 y=c;
         }
