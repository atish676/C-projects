//company selection conditions
int main()
         {
             float exp,per;
             printf("enter your experience,percentage:");
             scanf("%f%f",&exp,&per);

             if(exp>=2)
             {
                 if(per>=80)
                    printf("\nsenior engineer applied");
                 else
                    printf("\njunior engineer applied");
             }
             else
                printf("\ntrainee applied");
         }
