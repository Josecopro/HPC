#include <stdio.h>
#include <stdlib.h>


int main() {
    int n = 3, m = 3;
    
    // Crear la matriz dinámica
    int **matriz = (int **) calloc(n , sizeof(int *));
    for (int i = 0; i < n; i++) {
        matriz[i] = (int *) calloc(m, sizeof(int));
    }

    // Inicializar la matriz con valores
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            matriz[i][j] = i * m + j + 1;
        }
    }

    // Imprimir la matriz
    printf("Matriz 3x3:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    // Liberar la memoria
    for (int i = 0; i < n; i++) {
        free(matriz[i]);
    }
    free(matriz);

    printf("Matriz 3x3:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}