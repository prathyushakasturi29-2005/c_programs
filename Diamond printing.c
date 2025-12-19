#include<stdio.h>
int main()
{
    int rows,i,j,space;
    printf("Enter number of rows:");
    scanf("%d",&rows);
    for(i=1;i<=rows;i++)
    {
        for(space=i;space<rows;space++)
        {
            printf(" ");
        }
        for(j=1;j<=2*i-1;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(i=rows-1;i>=1;i--)
    {
        for(space=rows;space>i;space--)
        {
            printf(" ");
        }
        for(j=1;j<=2*i-1;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
