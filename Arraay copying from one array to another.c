#include <stdio.h>
int main()
{
    int n,i,arr1[100],arr2[100];
    printf("Enter size of elements:");
    scanf("%d",&n);
    printf("Enter elements of the first array:\n");
    for(i=0; i<n;i++)
    {
        scanf("%d",&arr1[i]);
    }
    for(i=0;i<n;i++) 
    {
        arr2[i]=arr1[i];
    }
    printf("Elements of the second array after copying:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr2[i]);
    }
    return 0;
}
