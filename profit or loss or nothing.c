//calculate profit or loss
int main()
         {
             float p,s,profit,loss;
             printf("enter purchase price:");
             scanf("%f",&p);
             printf("enter selling price:");
             scanf("%f",&s);

             if(p>s)
             {
                 printf("\nLOSS!!!!");
                 loss=p-s;
                 printf("\n\nLoss of rupees=%f",loss);
             }
             else
                if(p==s)
             {
                 printf("\nno PROFIT no LOSS");
                 printf("\n\nyou are SAFE!!");
             }
             else
             {
                 printf("\nPROFIT!!!!!");
                 profit=s-p;
                 printf("\n\nProfit of rupees=%f",profit);
             }
         }
