#include<stdio.h>
#include<math.h>
int main()
{
    float principle,rate,time,simpleinterest;
    printf("Enter principle amount:");
    scanf("%f",&principle);
    printf("Enter rate of interest:");
    scanf("%f",&rate);
    printf("Enter time:");
    scanf("%f",&time);
    simpleinterest=(principle*rate*time)/100;
    printf("Simple Interest:%.2f\n",simpleinterest);
    return 0;
}
