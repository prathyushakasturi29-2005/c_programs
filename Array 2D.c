#include<stdio.h>
int main()
{
   int a[2][3],i,j;
   printf("Enter elements of 2D array:\n");
   for(i=0;i<2;i++)
   {
       for(j=0;j<3;j++)
       {
           scanf("%d",&a[i][j]);
       }
   }
   printf("The 2D Array is:\n");
   for(i=0;i<2;i++)
   {
       for(j=0;j<3;j++)
       {
           printf("%d\t",a[i][j]);
       }
       printf("\n");
   }
       return 0;
}
 
       
