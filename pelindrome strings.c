int main()
         {
             char s1[30],s2[30];
             printf("enter string:");
             gets(s1);

             strcpy(s2,s1);

             strrev(s1);
             printf("reverse=%s",s1);

             int resp=strcmp(s1,s2);

             if (resp!=0)
                printf("\n\nNOT");
             else
                printf("\n\nPALINDROME");
         }
