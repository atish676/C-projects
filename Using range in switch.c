#include<stdio.h>
int main()
         {
             int T;
             scanf("%d",&T);
             switch(T)
             {
             case 0 ... 10:
                    printf("Extremely cold");
                    break;
             case 11 ... 20:
                printf("Very cold");
                break;
             case 21 ... 30:
                printf("Cold");
                break;
             case 31 ... 40:
                printf("hot");
                break;
             case 41 ... 50:
                printf("very hot");
                break;
             case 51 ... 60:
                printf("extremely hot");
                break;
             default:
                printf("Pakka ladki hai");
                break;
             }
         }
