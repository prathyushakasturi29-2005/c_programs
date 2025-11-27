#include<stdio.h>
int main()
{
    int num1=4;
    int num2=2;
    int add,sub,mul,modulus;
    float division;
    add=num1+num2;
    sub=num1-num2;
    mul=num1*num2;
    modulus=num1%num2;
    division=(float)num1/num2;
    printf("Addition of two values:%d\n",add);
    printf("Subtraction of two values:%d\n",sub);
    printf("Multiplication of two values:%d\n",mul);
    printf("Modulus of two values:%d\n",modulus);
    printf("Division of two values:%f\n",division);
    return 0;
}
