int main()
         {
             void show(int *p);
             int L[]={5,8,4,6,7,2};
             show(&L[0]);
         }
void show(int *p)
         {
             int i;
             for(i=0;i<6;i++)
             {
                 i[p]=i[p]*9999;
                 printf("%d \n",i[p]);
             }
         }
