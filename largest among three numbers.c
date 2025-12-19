#include<stdio.h>
int main()
{
int a,b,c;
printf("Enter a value:");
scanf("%d",&a);
printf("Enter b value:");
scanf("%d",&b);
printf("Enter c value:");
scanf("%d",&c);
if (a>b&&a>c)
{
    printf("Largest num:%d",a);
}
else if (b>c&&b>a)
{
    printf("Largest num:%d",b);
}
else
{
    printf("Largest num:%d",c);
}
 return 0;
}

