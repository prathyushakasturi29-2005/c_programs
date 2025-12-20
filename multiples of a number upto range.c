#include <stdio.h>
int main() 
{
    int n,num,i;
    printf("Enter the number:");
    scanf("%d",&num);
    printf("Enter the range up to:");
    scanf("%d",&n);
    printf("Multiples of %d up to %d are:",num,n);
    for (i=num;i<=n;i=i+num)
    {
        printf("%d ",i);
    }
    return 0;
}
