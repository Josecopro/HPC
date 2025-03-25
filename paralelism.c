#include <stdio.h>
#include <omp.h>

int main() {
    int i;
    int a[10];

    // Initialize the array
    for (i = 0; i < 10; i++) {
        a[i] = i;
    }

    // Parallel for loop
    #pragma omp parallel for
    for (i = 0; i < 10; i++) {
        a[i] = a[i] * 2;
        printf("Thread %d: a[%d] = %d\n", omp_get_thread_num(), i, a[i]);
    }

    return 0;
}
// To compile this file, use: gcc -fopenmp -o paralelism paralelism.c
// To run the compiled program, use: ./paralelism