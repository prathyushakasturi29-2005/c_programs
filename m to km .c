#include <stdio.h>
int main()
{
    float meters,kilometers;

    printf("Enter distance in meters:");
    scanf("%f",&meters);
    kilometers = meters/1000;
    printf("%.f meters = %.f kilometers\n",meters,kilometers);
    return 0;
}
