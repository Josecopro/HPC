#include <stdio.h>
#include <omp.h>

#define SIZE 2000
#define NUM_THREADS 4

int A[SIZE][SIZE], B[SIZE][SIZE], C[SIZE][SIZE];


void FillMatrix(int matrix[SIZE][SIZE]) {
    int *ptr = &matrix[0][0];
    #pragma omp parallel for num_threads(NUM_THREADS)
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            *(ptr + i * SIZE + j) = i + j;
        }
    }
}
void PrintMatrix(int matrix[SIZE][SIZE]) {
    int *ptr = &matrix[0][0];
    #pragma omp parallel for num_threads(NUM_THREADS)
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%d ", *(ptr + i * SIZE + j));
        }
        printf("\n");
    }
}
void MultiplyMatrices(int A[SIZE][SIZE], int B[SIZE][SIZE], int C[SIZE][SIZE]) {
    int *ptrA = &A[0][0];
    int *ptrB = &B[0][0];
    int *ptrC = &C[0][0];
    #pragma omp parallel for collapse(2) num_threads(NUM_THREADS)
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            *(ptrC + i * SIZE + j) = 0;
            for (int k = 0; k < SIZE; k++) {
                *(ptrC + i * SIZE + j) += *(ptrA + i * SIZE + k) * *(ptrB + k * SIZE + j);
            }
        }
    }
}
int main() {
    FillMatrix(A);
    FillMatrix(B);

    double start_time = omp_get_wtime();
    MultiplyMatrices(A, B, C);
    double end_time = omp_get_wtime();

    printf("Tiempo Final: %f Segundos\n", end_time - start_time);

    // PrintMatrix(C);

    return 0;
}