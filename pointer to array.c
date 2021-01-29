int main()
         {
             int X[100],n,i,*P;
             printf("enter value of A:");
             scanf("%d",&n);

             for(i=0;i<n;i++)
             {
                 printf("enter value at %d location:",i);
                 scanf("%d",&X[i]);
             }

             P=X;
             printf("OUTPUT:");
             printf("\n");
             for(i=0;i<n;i++)
             {
               printf("%d\n",*(P+i));
               printf("%d\n",*(i+P));
               printf("%d\n",*(X+i));
               printf("%d\n",*(i+X));
               printf("%d\n",X[i]);
               printf("%d\n",i[X]);
               printf("%d\n",P[i]);
               printf("%d\n",i[P]);
               printf("%d\n",*P++);
               printf("%d\n",*P);
                      P++;
             }
         }
