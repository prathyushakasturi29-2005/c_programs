#include <stdio.h>
int main()
{
    int marks;
    printf("Enter marks:");
    scanf("%d",&marks);
    if(marks<0||marks>100)
    {
        printf("Invalid marks! Please enter marks between 0 and 100");
        return 0;
    }
    switch(marks/10) 
    {
        case 10:
            printf("Grade A+");
            break;
        case 9: 
            printf("Grade A"); 
            break;
        case 8: 
            printf("Grade B"); 
            break;
        case 7: 
            printf("Grade C");
            break;
        case 6:
            printf("Grade D"); 
            break;
        default: 
            printf("Fail");
    }
    return 0;
}
