#include <stdio.h>
void Sort_asc_desc(int arr[], int n)
{
    int temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for (int i = 0; i < n / 2; i++)
        printf("%d ", arr[i]);
    for (int j = n - 1; j >= n / 2; j--)
        printf("%d ", arr[j]);
}
int main()
{
    int arr[] = { 11, 23, 42, 16, 83, 73, 59 };
    int N = sizeof(arr) / sizeof(arr[0]);
    Sort_asc_desc(arr, N);
    return 0;
}
