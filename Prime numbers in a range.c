#include<stdio.h>
#include<math.h>
int prime(int t)
          {
              int d,x=0;
              for(d=2;d<t;d++)
              {
                  if(t%d==0)
                  {
                      x=1;
                      break;
                  }
              }
              if(x==0)
                return t;
          }
int main()
         {
             int m,n;
             scanf("%d%d",&m,&n);
             for(int a=m+1;a<n;a++)
             {
                 printf("\n%d",prime(a));
             }
         }
