#include<stdio.h>
int main()
{
int a,b,temp;
printf("Enter the a value:");
scanf("%d",&a);
printf("Enter the b value:");
scanf("%d",&b);
temp=a;
a=b;
b=temp;
printf("After swapping:a=%d,b=%d\n",a,b,temp);
return 0;
}
