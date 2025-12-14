#include<stdio.h>
int main()
{
    int i,n,arr[i];
    printf("Enter size of Array:");
    scanf("%d",&n);
    printf("Enter the elements of Array:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int max=arr[0];
    int min=arr[0];
    for(i=1;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    printf("Maximum number in the array:%d\n",max);
    printf("Minimum number in the array:%d\n",min);
    return 0;
}
