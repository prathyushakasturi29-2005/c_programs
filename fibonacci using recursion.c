#include <stdio.h>
int fibonacci(int n)
{
    if (n <= 1)
        return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}
int fibonacci_iteration(int n)
{
    if (n <= 1)
        return 1;
    int arr[n + 1];
    arr[0] = 1;
    arr[1] = 1;
    for (int i = 2; i < n + 1; i++)
        arr[i] = arr[i - 1] + arr[i - 2];
    return arr[n];
}
int main()
{
    int n = 9;
    printf("Fibonacci using recursion of %d:%d\n", n, fibonacci(n));
    n = 11;
    printf("Fibonacci using iteration of %d:%d", n, fibonacci_iteration(n));
    return 0;
}


