#include <stdio.h>
int main() 
{
    int n,digit,product=1;  
    printf("Enter a number:");
    scanf("%d",&n);
    if(n==0) 
    {
        product=0;  
    } 
    else
    {
        while(n>0)
        {
            digit=n%10;   
            product=product*digit;
            n=n/10;         
        }
    }
    printf("Product of digits:%d\n",product);
    return 0;
}
