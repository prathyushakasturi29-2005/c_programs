#include<stdio.h>
int main()
{
    int a;
    printf("Enter a value:");
    scanf("%d",&a);
    if (a%2 == 0)
    {
        printf("Even\n");
    }
    else
    {
        printf("odd\n");
    }
    return 0;
    }
