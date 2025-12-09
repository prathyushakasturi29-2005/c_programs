#include<stdio.h>
int main()
{
int num,original,rem,rev=0;
printf("Enter a number:");
scanf("%d",&num);
original=num;
while(num!=0)
{
    rem=num%10;
    rev=rev*10+rem;
    num=num/10;
}
if(original==rev)
printf("%d is a palindrome number");
else
printf("%d is not a palindrome number");
return 0;
}
  
