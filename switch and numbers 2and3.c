//switch usage with telling greater
int main()
         {
             int A,B,C,choice;
             printf("enter your choice(2,3):");
             scanf("%d",&choice);
             switch(choice)
             {
             case 2:
                printf("enter value of A,B:");
                scanf("%d%d",&A,&B);
                if(A>B)
                    printf("\nA is greater");
                else
                    printf("\nB is greater");
                    break;
             case 3:
                printf("enter value of A,B,C:");
                scanf("%d%d%d",&A,&B,&C);
                if(A>B)
                {
                    if(A>C)
                    printf("\nA is greatest");
                    else
                    printf("\nC is greatest");
                }
                else
                {
                    if(B>C)
                        printf("\nB is greatest");
                    else
                        printf("\nC is greatest");
                        break;
                }
         }
         }
