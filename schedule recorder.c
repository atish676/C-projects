#include<stdio.h>
int main()
         {int s[100],t[100],n;
         printf("Enter Password: ");
         gets(s);
         printf("Enter Password again: ");
         gets(t);
         int x=strcmp(s,t);

         if(x==0)
         {
             printf("\nPRESS: \n1 for MONDAY\n2 for TUESDAY\n3 for WEDNESDAY\n4 for THURSDAY\n5 for FRIDAY\n6 for SATURDAY\n7 for SUNDAY");
             printf("\n\nEnter number:");
             scanf("%d",&n);
             switch(n)
             {
                 int a[100],b[100],c[100],d[100],e[100],f[100],g[100];
                 printf("\nEnter the schedule for the day");
                 case 1:
                     printf("Monday's schedule: ");
                     scanf("%s",&a[100]);break;
                 case 2:
                     printf("Tuesday's schedule: ");
                     scanf("%s",&b[100]);break;
                 case 3:
                     printf("Wednesday's schedule: ");
                     scanf("%s",&c[100]);break;
                 case 4:
                     printf("Thursday's schedule: ");
                     scanf("%s",&d[100]);break;
                 case 5:
                     printf("Friday's schedule: ");
                     scanf("%s",&e[100]);break;
                 case 6:
                     printf("Saturday's schedule: ");
                     scanf("%s",&f[100]);break;
                 case 7:
                     printf("Sunday's schedule: ");
                     scanf("%s",&g[100]);break;
                 default:
                     printf("\nWRONG number bsdk");
             }
             printf("\nSchedule recorded.");
         }
         else
            printf("\n\nFirse daal password bsdk");
         }
