#include <stdio.h>
int main() 
{
    int start,end,i;
    printf("Enter the starting number:");
    scanf("%d",&start);
    printf("Enter the ending number:");
    scanf("%d",&end);
    printf("Odd numbers between %d and %d are:",start,end);
    for(i=start;i<=end;i++) 
    {
        if(i%2!=0)
        {
            printf("%d ",i);
        }
    }
    return 0;
}
