#include<stdio.h>
int GCD(int m,int n)
         {
             if(n!=0)
                return GCD(n,m%n);
             else
                return m;
         }

int LCM(int m,int n)
         {
             return(m*n)/GCD(m,n);
         }
int main()
         {
             int m,n;
             scanf("%d%d",&m,&n);
             int gcd=GCD(m,n);
             int lcm=LCM(m,n);
             printf("\nGCD= %d",gcd);
             printf("\nLCM= %d",lcm);
         }
