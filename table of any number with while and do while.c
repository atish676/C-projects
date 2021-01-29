int main()
         {
             int n,c=1,x;
             printf("the number is:");
             scanf("%d",&n);

             while(c<=10)
             {
                 printf("\n%d*%d=%d",n,c,x=n*c);
                 c++;
             }

             do{printf("\n\n\n%d*%d=%d",n,c,x=n*c);
                c++;}while(c<=10);






         }
