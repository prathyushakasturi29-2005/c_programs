#include <stdio.h>
int main()
{
    int arr[100],n,sum=0;
    printf("Enter number of elements:");
    scanf("%d",&n);
    printf("Enter array elements:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    printf("Sum of array elements = %d", sum);
    return 0;
}
