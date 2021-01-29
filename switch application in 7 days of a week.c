//application for 7 days
int main()
         {
             int choice;
             printf("enter your choice(1,2,3,4,5,6,7):");
             scanf("%d",&choice);
             switch(choice)
             {
         case 1:
            printf("\nMONDAY");
            printf("\n\nWake up!");
            break;
         case 2:
            printf("\nTUESDAY");
            printf("\n\nImportant Meeting!");
            break;
         case 3:
             printf("\nWEDNESDAY");
             printf("\n\nPresentation Day!");
             break;
         case 4:
            printf("\nTHURSDAY");
            printf("\n\nBoss's Birthday!!!!!!");
            break;
         case 5:
            printf("\nFRIDAY");
            printf("\n\nLast Working Day!");
            break;
         case 6:
            printf("\nSATURDAY");
            printf("\n\nShopping With Wife!!");
            break;
         case 7:
            printf("\nSUNDAY");
            printf("\n\nRelax....");
            break;
         default:
            printf("\n\nWork Work Work Work!!!!!!!!!!!!!!!!");
             }
         }
