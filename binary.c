#include<stdio.h>
int main(int n)
{
    int binaryNum[1000];
    scanf("%d",&n);
    int i = 0;
    while (n > 0)
     {
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
     }
    for (int j = i - 1; j >= 0; j--)
        printf("%d",binaryNum[j]);
}
