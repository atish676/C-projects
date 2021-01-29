#include<stdio.h>
int main()
         {
             int a,b,c,X;
             printf("Enter the 3 numbers:");
             scanf("%d%d%d",&a,&b,&c);
             printf("\nAnswer is:");
             X=(a>b)?((a>c)?(printf("%d",a)):(printf("%d",c))):((b>c)?(printf("%d",b)):(printf("%d",c)));
         }
