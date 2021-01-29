#include<stdio.h>
int pl,tiexp,totals,total;
int Total()
          {
              int x=tiexp+totals+total+5000;
              char ans;
              printf("------------------------------------------------------------------------------------------------------------------------\n");
              printf("\nGST on Travel Agency is 18%%\n");
              printf("For Sightseeing and some Other Activities, we will include some extra charges (RS 5000) :)\n");
              printf("Would you like to go Sightseeing with us ? y for Yes and n for No");
              scanf(" %c",&ans);
              if(ans=='y')
              printf("Your Total for whole travel = RS %.2f\n",(x*0.18)+x);
              else if(ans=='n')
                printf("Your Total for whole travel = RS %.2f\n",(x*0.18)+x-15900);
              else
                printf("Press 'y' for YES or 'n' for NO.");
              printf("------------------------------------------------------------------------------------------------------------------------\n");

          }
int hotel(int no, int fm, int mf)
          {
              int rooms,summer=100,winter=50,days=no,members=fm;
              printf("------------------------------------------------------------------------------------------------------------------------");
              printf("\n\t\t\t\t\t--LETS CHOOSE THE HOTEL REQUIREMENTS--\n");
              printf("------------------------------------------------------------------------------------------------------------------------\n");
              printf("Enter Number of Rooms required: ");
              scanf("%d",&rooms);
              if(mf==4 || mf==5 || mf==6 || mf==7 || mf==8 || mf==9)
              {
                  total = rooms*days*members*plan()*summer;
                  printf("\nYour total = RS %d\n",total);
                  printf("------------------------------------------------------------------------------------------------------------------------");

              }
              else
              {
                  total = rooms*days*members*plan()*winter;
                  printf("\nYour total = RS %d\n",total);
                  printf("------------------------------------------------------------------------------------------------------------------------");
              }
          }
int plan()
         {
             int x,breakfast=10,lunch=5,dinner=5,price;
             char ld;
             printf("------------------------------------------------------------------------------------------------------------------------\n");
             printf("Please choose your plan for the stay:\n\n");
             printf("1. Continental Plan\n");
             printf("2. American Plan\n");
             printf("3. Modified American Plan\n");
             printf("4. European Plan\n");
             Y:
                 printf("\nYour choice: ");
                 scanf("%d",&x);
                 printf("------------------------------------------------------------------------------------------------------------------------");
             switch(x)
             {
                 case 1:
                     price = breakfast;
                     return price;
                     break;
                 case 2:
                     price = breakfast+lunch+dinner;
                     return price;
                     break;
                 case 3:
                     printf("\nWhat would you like to be provided with ? Lunch(L) or Dinner(D) ? ");
                     printf("Your choice: ");
                     X:
                     scanf(" %c",&ld);
                     switch(ld)
                     {
                 case 'l':
                 case 'L':
                         price = breakfast+lunch;
                         return price;
                         break;
                 case 'd':
                 case 'D':
                         price = breakfast+dinner;
                         return price;
                         break;
                 default:
                         printf("\nPlease input L for Lunch or D for Dinner");
                         goto X;
                     }
                 case 4:
                     price = 4;
                     return price;
                     break;
                 default:
                     printf("\nPlease choose one of the given plans.\n");
                     goto Y;
                     break;
             }
         }
int taxi(int pl, int fm)
         {
             int taxi,charge=8,distance;
             printf("\n\t\t\t\t\t--LETS CALCULATE TAXI FARE--\n");
             printf("------------------------------------------------------------------------------------------------------------------------\n");
             printf("\nNumber of taxis you would require (from home)? ");
             scanf("%d",&taxi);
             if(pl==5 || pl==6)
             {
                 printf("\nPlease enter the distance between your Home to Railway Station: ");
                 scanf("%d",&distance);
                 printf("\nTaxi fare from your Home to Railway Station = %d",fm*taxi*charge*distance);
                 printf("\nTaxi fare from Railway Station to your Hotel = %d",fm*taxi*charge*20);
                 printf("\nTotal Fare = RS %d\n",totals=(fm*taxi*charge*distance)+(fm*taxi*charge*20));
             }
             else
             {
                 printf("\nPlease enter the distance between your Home to Airport: ");
                 scanf("%d",&distance);
                 printf("\nTaxi fare from your Home to Airport = %d",fm*taxi*charge*distance);
                 printf("\nTaxi fare from Airport to your Hotel = %d",fm*taxi*charge*30);
                 printf("\nTotal Fare = RS %d\n",totals=(fm*taxi*charge*distance)+(fm*taxi*charge*30));
             }
         }
int ticket(int no,int ad,int ch,int ag)
          {
                int exp;
                char n;
                printf("\n\t\t\t\t\t--BOOK YOUR TICKET--\n");
                printf("\t\t\t\t\t--AND--\n");
                printf("\t\t\t\t\t--CHOOSE PLACE YOU WANT TO GO--\n");
                printf("------------------------------------------------------------------------------------------------------------------------");
                printf("\nPress 'N' for National Trip and 'I' for International Trip: ");
                scanf(" %c",&n);
                printf("------------------------------------------------------------------------------------------------------------------------\n");
                if(n=='N' || n=='n')
                  {
                    printf("------------------------------------------------------------------------------------------------------------------------\n");
                    printf("Please select the destination if you want to travel via Airplane\n");
                    printf("For GOA in Economy Class, press 1 \n");
                    printf("For GOA in Business Class, press 2 \n");
                    printf("For CHANDIGARH in Economy Class, press 3 \n");
                    printf("For CHANDIGARH in Business Class, press 4 \n");
                    printf("------------------------------------------------------------------------------------------------------------------------\n");
                    printf("Please select the destination if you want to travel via Railways\n");
                    printf("For GOA, press 5\n");
                    printf("For CHANDIGARH, press 6\n");
                    printf("------------------------------------------------------------------------------------------------------------------------\n");
                    printf("Your choice: ");
                    scanf("%d",&pl);
                    switch(pl)
                            {
                                case 1:  printf("\nTotal expense of journey for GOA in Economy Class is RS 4000 per head \n"); exp=4000;break;
                                case 2:  printf("\nTotal expense of journey for GOA in Business Class is RS 6000 per head \n"); exp=6000;break;
                                case 3:  printf("\nTotal expense of journey for CHANDIGARH Economy Class is RS 4000 per head\n"); exp=4000;break;
                                case 4:  printf("\nTotal expense of journey for CHANDIGARH Business Class  is RS 6000 per head \n"); exp=6000;break;
                                case 5:  printf("\nTotal expense of journey for GOA via RAILWAYS is RS 4000 per head \n"); exp=4000;break;
                                case 6:  printf("\nTotal expense of journey for CHANDIGARH via RAILWAYS is RS 4000 per head\n"); exp=4000;break;
                            }
                  }
             else {
                    printf("\t\t\t\t\t--GET PASSPORT READY--\n");
                    printf("------------------------------------------------------------------------------------------------------------------------\n");
                    printf("For TOKYO in Economy Class, press 7\n");
                    printf("For TOKYO in Business Class, press 8\n");
                    printf("For PARIS in Economy Class, press 9\n");
                    printf("For PARIS in Business Class, press 0\n");
                    printf("Your choice: ");
                    scanf("%d",&pl);
                    switch(pl)
                            {
                                case 7:  printf("\nTotal expense for journey of TOKYO in Economy Class is RS 30000 per head\n"); exp=30000;break;
                                case 8:  printf("\nTotal expense for journey of TOKYO in Business Class is RS 45000 per head \n"); exp=45000;break;
                                case 9:  printf("\nTotal expense for journey of PARIS in Economy Class is RS 30000 per head \n"); exp=30000;break;
                                case 0:  printf("\nTotal expense for journey of PARIS in Business Class is RS 45000 per head\n"); exp=45000;break;
                            }
                  }
                if(ag==1)
                    return (exp*no);
                else
                    return (exp*ad+exp*ch);
          }
int main()
         {
             printf("\t\t\t\t\t---WELCOME TO PAISA WASOOL TRAVELS !!---\n");
             printf("------------------------------------------------------------------------------------------------------------------------\n");
             int fm,ad,ch,no,df,mf,yf,dt,mt,yt,ag;
             printf("Enter the number of family members: ");
             scanf("%d",&fm);
             printf("\nEnter the number of adults: ");
             scanf("%d",&ad);
             ch=fm-ad;
             printf("\nNumber of days you want to go on trip: ");
             scanf("%d",&no);
             printf("\nPlease enter journey date in this format(dd/mm/yyyy):\n");
             scanf("%d/%d/%d",&df,&mf,&yf);
             printf("\nIf child's age is between 10 and 18, press 1 else press anything: ");
             scanf("%d",&ag);
             printf("------------------------------------------------------------------------------------------------------------------------");
             tiexp=ticket(fm,ad,ch,ag);
             printf("Your total expense of travel is %d\n",tiexp);
             hotel(no,fm,mf);
             taxi(pl,fm);
             Total();
             printf("\t\t\t\t\tTHANK YOU !!!");
         }
