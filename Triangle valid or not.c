#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three angles of a triangle:");
    scanf("%d %d %d",&a,&b,&c);
    if (a>0&&b>0&&c>0&&(a+b+c==180))
    {
        printf("Triangle is valid");
    }
    else
    {
        printf("Triangle is not valid");
    }
    return 0;
}
