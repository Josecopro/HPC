#include <stdio.h>
#include <math.h>
#include <omp.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10000

double point_product(double **vectors, double *result, int size) {
    double total = 0.0;
    #pragma omp parallel for simd
    for (int i = 0; i < size; i++) {
        result[i] = 1.0;
        for (int j = 0; j < SIZE; j++) {
            result[i] *= vectors[j][i];
        }
        total += result[i];
    }
    return total;
}


int main() { 

    double **vectors;
    double *result, Total;
    int i, j;
    int size = SIZE;
    srand(time(NULL));
    vectors = (double **)malloc(SIZE * sizeof(double *));
    for (i = 0; i < SIZE; i++) {
        vectors[i] = (double *)malloc(size * sizeof(double));
    }
    result = (double *)malloc(size * sizeof(double));
    // Initialize the vectors with random values
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < size; j++) {
            vectors[i][j] = rand() % 10 + 1;
        }
    }
    double start_time = omp_get_wtime();
    Total = point_product(vectors, result, size);
    double end_time = omp_get_wtime();
    printf("Time spent in point_product: %f seconds\n", end_time - start_time);


    for (i = 0; i < SIZE; i++) {
        free(vectors[i]);
    }
    free(vectors);
    free(result);

    return 0;
}