#include <stdio.h>
int main()
{
    int n,i,arr[100];
    printf("Enter size of array:");
    scanf("%d",&n);
    printf("Enter elements of array:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Array elements are:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
