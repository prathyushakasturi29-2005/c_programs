#include<stdio.h>
int main()
{
    int num;
    printf("Enter number:");
    scanf("%d",&num);
    while(num>1)
    {
        num=num-2;
    }
    if (num == 0)
    {
        printf("Even");
    }
    else
    {
        printf("odd");
    }
    return 0;
}
    
