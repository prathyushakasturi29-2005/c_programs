#include <stdio.h>
int power(int x, unsigned int y)
{
    if (y == 0)
        return 1;
    if (y % 2 == 0)
        return power(x, y / 2) * power(x, y / 2);
    return x * power(x, y / 2) * power(x, y / 2);
}
int order(int n)
{
    int res = 0;
    while (n) {
        res++;
        n = n / 10;
    }
    return res;
}
int isArmstrong(int x)
{
    int n = order(x);
    int temp = x, sum = 0;
    while (temp) {
        int r = temp % 10;
        sum += power(r, n);
        temp = temp / 10;
    }
    if (sum == x)
        return 1;
    else
        return 0;
}
int main()
{
    int x = 120;
    if (isArmstrong(x) == 1)
        printf("True\n");
    else
        printf("False\n");
    x = 1634;
    if (isArmstrong(x) == 1)
        printf("True\n");
    else
        printf("False\n");
    return 0;
}


