int main()
         {
             int yep();
             int show();
             char namae[8]="ATISH";
             printf("name=%s",namae);
             show();
             yep();
         }
int show()
         {
             char name[100];
             printf("\n\nenter name:");
             gets(name);
             printf("name=%s",name);
         }
int yep()
        {
            char L[10],K[10];
            printf("\n\nenter string:");
            gets(L);

            strrev(L);
            printf("\nreverse=%s",L);

            strlwr(L);
            printf("\nlower=%s",L);

            strupr(L);
            printf("\nupper=%s",L);

            int length=strlen(L);
            printf("\nlength=%d",length);
            strcpy(K,L);
            printf("\ncopied=%s",K);
        }
