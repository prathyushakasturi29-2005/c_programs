#include<stdio.h>
int main()
{
    int arr[100];
    int i,n;
    printf("Enter array size:\n");
    scanf("%d",&n);
    printf("Enter the array elements:\n");
    for(i=0;i<=n-1;i++)
    {
    scanf("%d",&arr[i]);
    }
    printf("Reversed array:\n");
    for(i=n-1;i>=0;i--)
    {
    printf("%d\n",arr[i]);
    }
    return 0;
}
