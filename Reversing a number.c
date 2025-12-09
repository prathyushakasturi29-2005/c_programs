#include<stdio.h>
int reverseNumber(int num)
{
int rev=0,rem;
while(num!=0)
{
    rem=num%10;
    rev=rev*10+rem;
    num=num/10;
}
    return rev;
}
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    printf("Reversed number:%d\n",reverseNumber(n));
    return 0;
}
