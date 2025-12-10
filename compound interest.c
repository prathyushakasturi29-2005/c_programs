#include<stdio.h>
#include<math.h>
int main()
{
    float principle,rate,time,amount,CI;
    printf("Enter principle amount:");
    scanf("%f",&principle);
    printf("Enter rate of interest:");
    scanf("%f",&rate);
    printf("Enter time:");
    scanf("%f",&time);
    amount=principle*pow((1+rate/100),time);
    CI=amount-principle;
    printf("compound interest:%.2f\n",CI);
    printf("Total amount:%.2f\n",amount);
    return 0;
}
