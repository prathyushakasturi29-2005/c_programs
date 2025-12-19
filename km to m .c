#include <stdio.h>
int main()
{
    float km, meters;
    printf("Enter distance in kilometers:");
    scanf("%f",&km);
    meters=km*1000;
    printf("%.2f kilometers=%.2f meters\n",km,meters);
    return 0;
}
