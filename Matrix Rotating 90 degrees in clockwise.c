#include <stdio.h>
void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int n = 4;
    int arr[4][4] = { { 1, 2, 3, 4 },
                      { 5, 6, 7, 8 },
                      { 9, 10, 11, 12 },
                      { 13, 14, 15, 16 } };
    printf("Orignal Matrix:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++) 
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < i; j++)
            swap(&arr[i][j], &arr[j][i]);
    }
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n / 2; j++)
        {
            swap(&arr[i][j], &arr[i][n - j - 1]);
        }
    }
    printf("Matrix after rotation: \n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}
