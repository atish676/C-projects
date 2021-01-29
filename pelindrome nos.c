int main()
         {
             int n,r,rev=0,photo;
             printf("enter the digit:");
             scanf("%d",&n);

             photo=n;
             while(photo!=0)
             {
                 r=photo%10;
                 rev=rev*10+r;
                 photo=photo/10;
             }
             printf("\nREVERSE=%d",rev);
             if(rev==n)
                printf("\n\npalindrome");
             else
                printf("\n\nnot palindrome");
         }







