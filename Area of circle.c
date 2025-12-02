#include<stdio.h>
int main()
{
    float area,radius;
    float pi=3.14159;
    printf("Enter the radius:");
    scanf("%f",&radius);
    area=pi*radius*radius;
    printf("Area of a circle:%.2f\n",area);
    return 0;
}
