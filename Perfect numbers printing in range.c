#include <stdio.h>
int main() 
{
    int start,end;
    printf("Enter the starting number:");
    scanf("%d",&start);
    printf("Enter the ending number:");
    scanf("%d",&end);
    printf("Perfect numbers between %d and %d are:",start,end);
    for(int n=start;n<=end;n++) 
    {
        int sum=0;
        for(int i=1;i<=n/2;i++)
        {
            if(n%i==0)
            {
                sum=sum+i;
            }
        }
        if(sum==n)
        {
            printf("%d ",n);
        }
    }
    return 0;
}
