#include<stdio.h>
int main()
{
    float area,length,breadth;
    printf("Enter the length:");
    scanf("%f",&length);
    printf("Enter the breadth:");
    scanf("%f",&breadth);
    area=length*breadth;
    printf("Area of a Rectangle:%.2f\n",area);
    return 0;
}
