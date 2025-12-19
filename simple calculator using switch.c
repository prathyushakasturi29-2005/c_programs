#include<stdio.h>
int main()
{
    char operator;
    double num1,num2,add,sub,mul,div;
    printf("Enter an operator(+,-,*,/):");
    scanf("%c",&operator);
    printf("Enter two numbers:");
    scanf("%lf %lf",&num1,&num2);
    switch(operator)
    {
        case'+':
            add=num1+num2;
            printf("addition:%.2lf\n",add);
            break;
        case'-':
            sub=num1-num2;
            printf("subtraction:%.2lf\n",sub);
            break;
        case'*':
            mul=num1*num2;
            printf("multiplication:%.2lf\n",mul);
            break;
        case'/':
            if(num2!=0)
            {
                div=num1/num2;
                printf("division:%.2lf\n",div);
            }
            else
            {
                printf("Error:Division by 0!\n");
                break;
            }
            default:
                printf("Error:Invalid operator!\n");
    }
    return 0;
}
    

        
    
