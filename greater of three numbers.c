//Greater of 3 numbers
int main()
         {
             float A,B,C;
             printf("enter the 3 numbers:");
             scanf("%f%f%f",&A,&B,&C);

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
             }
         }
