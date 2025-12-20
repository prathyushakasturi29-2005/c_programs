#include <stdio.h>
int main()
{
    int n,i,arr[100],key;
    printf("Enter size of array:");
    scanf("%d",&n);
    printf("Enter array elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter element to search:");
    scanf("%d",&key);
    for(i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            printf("Element found at position %d",i+1);
            return 0;
        }
    }
    printf("Element not found");
    return 0;
}
