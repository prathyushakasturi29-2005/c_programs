#include <stdio.h>
void transpose(int N, int M, int A[M][N], int B[N][M])
{
    int i, j;
    for (i = 0; i < N; i++)
        for (j = 0; j < M; j++)
            B[i][j] = A[j][i];
}
int main()
{
    int M = 3;
    int N = 4;
    int A[3][4] = { { 1, 1, 1, 1 },
                    { 2, 2, 2, 2 },
                    { 3, 3, 3, 3 } };
    int B[N][M], i, j;
    transpose(N, M, A, B);
    printf("Result matrix is \n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++)
            printf("%d ", B[i][j]);
        printf("\n");
    }
    return 0;
}



