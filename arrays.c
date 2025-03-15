#include <stdio.h>

int main(){
    int lista[10] = {10,11,12,13,14,15,16,17,18};
    int *puntero = lista;

    for(int i = 0; i < 10; i++){
        printf("Elemento %d: %d\n", i, *puntero);
        puntero++;
    }
    return 0;
}