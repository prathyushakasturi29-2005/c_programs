#include <stdio.h>
int main()
{
    int N = 11011;
    int a = 1;
    int ans = 0;
    while (N != 0) {
        ans = ans + (N % 10) * a;
        N = N / 10;
        a = a * 2;
    }
    printf("%d", ans);
    return 0;
}


