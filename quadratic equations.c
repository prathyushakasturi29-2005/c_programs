#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,discriminant,root1,root2,realpart,imgpart;
    printf("Enter coefficients of a,b and c:");
    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&c);
    discriminant=b*b-4*a*c;
    if(discriminant>0)
    {
        root1=(-b+sqrt(discriminant))/(2*a);
        root2=(-b-sqrt(discriminant))/(2*a);
        printf("Roots are real and different\n");
        printf("Root1:%.2f\n",root1);
        printf("Root2:%.2f\n",root2);
    }
    else if(discriminant==0)
    {
        root1=root2=-b/(2*a);
        printf("Roots are equal\n");
        printf("Root1=Root2:%.2f",root1);
    }
    else
    {
        realpart=-b/(2*a);
        imgpart=sqrt(discriminant)/(2*a);
        printf("Roots are complex\n");
        printf("Root1:%.2f+%.2fi\n",realpart,imgpart);
        printf("Root2:%.2f+%.2fi\n",realpart,imgpart);
    }
    return 0;
}

                                                                                                                                      
