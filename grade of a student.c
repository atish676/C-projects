//grade of a student
int main()
         {
             float n;
             printf("enter your marks:");
             scanf("%f",&n);

             if(n>90)
             {
               printf("\nGrade A");
               printf("\nYou PASS!!");
             }
             else
                if(n>75)
             {
                 printf("\nGrade B");
                 printf("\nSoooo CLOOOOOSE!!");
             }
             else
                if(n>50)
             {
                 printf("\nGrade C");
                 printf("\nWork HARDER!");
             }
             else
                if(n>33)
                {
                  printf("\nGrade D");
                  printf("\nJust SAFE!!");
                }
             else
             {
                 printf("\nGrade E");
                 printf("\nSuppli TIIIIIIIME!!!");
             }
                printf("\n\nTHANK YOU FOR VISITING!");
         }
