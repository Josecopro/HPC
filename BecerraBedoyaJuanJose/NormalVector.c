#include <stdio.h>
#include <omp.h>
#include <math.h>

#define SIZE 1000000
#define NUM_THREADS 4


void FillArray(int *array) {
    int *ptr = array;
    #pragma omp parallel for num_threads(NUM_THREADS)
    for (int i = 0; i < SIZE; i++) {
        *ptr++ = i;
    }
}
double CalculateNormalVector(int *array, int *normal_vector) {
    int *ptr = array;
    int *Vector = normal_vector;
    double Cumulator = 0;
    #pragma omp parallel for num_threads(NUM_THREADS)
    for (int i = 0; i < SIZE; i++) {
        *Vector++ = *(ptr + i) * *(ptr + i);
    }

    #pragma omp parallel for num_threads(NUM_THREADS)
    for (int i = 0; i < SIZE; i++) {
        Cumulator += *(ptr + i); 
    }

    return sqrt(Cumulator);
}

int main() {
    int array[SIZE];
    int normal_vector[SIZE];
    double Result;

    FillArray(array);

    double start_time = omp_get_wtime();
    Result = CalculateNormalVector(array, normal_vector);
    double end_time = omp_get_wtime();

    printf("Tiempo Final: %f Segundos\n", end_time - start_time);
    printf("Resultado: %f\n", Result);


    return 0;
}