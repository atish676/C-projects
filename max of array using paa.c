int i,n,X[10];
int main()
         {
             void max(int *P);
             printf("enter number of values to input:");
             scanf("%d",&n);
             for(i=0;i<n;i++)
             {
                 printf("\nenter value at %d location: ",i);
                 scanf("%d",&X[i]);
             }
             max(&X[0]);
         }
void max(int *P)
         {
             P==X[0];
             for(i=0;i<n;i++)
             {
                 if(*P<X[i])
                    *P=X[i];
             }
             printf("\nMaximum=%d",*P);
         }
