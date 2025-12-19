#include <stdio.h>
int main()
{
    int age;
    printf("Enter Age:");
    scanf("%d",&age);
    if(age >= 18)
    {
        printf("Eligible to vote\n");
    } 
    else 
    {
        printf(" Not Eligible to vote\n");
    }

    return 0;
}
