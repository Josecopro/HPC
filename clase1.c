#include <stdio.h>

void OrdenarBubble(int *lista, int n){
    int aux;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n-i; j++){
            if(*(lista + j) > *(lista + j+1)){
                aux = *(lista +j );
                *(lista + j) = *(lista + j +1);
                *(lista + j+ 1) = aux;
            }
        }
    }
}

int main(){
    int lista[5] = {5,3,8,4,1};


    OrdenarBubble(lista, 5);

    for (int i = 0; i< 5; i++){
        printf("%d", lista[i]);
    }

    printf("\n sizeof(int): %d\n", sizeof(double));



    return 0;
}