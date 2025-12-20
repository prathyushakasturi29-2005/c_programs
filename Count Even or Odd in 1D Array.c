#include <stdio.h>
int main()
{
    int n,i,arr[100],even=0,odd=0;
    printf("Enter number of elements:");
    scanf("%d",&n);
    printf("Enter array elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
            even++;
        else
            odd++;
    }
    printf("Even numbers count:%d\n",even);
    printf("Odd numbers count:%d",odd);
    return 0;
}
