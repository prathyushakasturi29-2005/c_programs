#include<stdio.h>
int main()
{
    int a=5;
    int *ptr;
    ptr=&a;
    printf("a value:%d\n",*ptr);
    printf("a address:%p\n",ptr);
    printf("ptr address:%p");
    return 0;
}
