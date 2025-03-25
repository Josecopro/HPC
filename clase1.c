#include <stdio.h>

int main(){

        int matriz[5][10];

        int rows = sizeof(matriz) / sizeof(matriz[0]);
        int cols = sizeof(matriz[0]) / sizeof(matriz[0][0]);

        int a = sizeof(matriz); 
        int b = sizeof(matriz[0]);
        int c = sizeof(matriz[0][0]);

        printf("%d\n",a);
        printf("%d\n",b);
        printf("%d\n", c);


        printf("Rows: %d, Columns: %d\n", rows, cols);
}