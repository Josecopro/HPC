#include <stdio.h>

void BubbleSort(int* Array, int n) {
    int i = 0;
    while (i < n - 1) {
        for (int j = 0; j < n - i - 1; j++) {
            if (*(Array + j) > *(Array + j + 1)) {
                int temp = *(Array + j);
                *(Array + j) = *(Array + j + 1);
                *(Array + j + 1) = temp;
            }
        }
        i++;
    }
}



int main(){
    int Array[] = {64, 34, 25, 12, 22, 11, 90,9, 8, 7, 6, 5, 4, 3, 2, 1};
    int n = sizeof(Array)/sizeof(Array[0]);
    BubbleSort(Array, n);
    printf("Sorted array: \n");
    for (int i = 0; i < n; i++){
        printf("%d ", Array[i]);
    }
    printf("\n");
    return 0;
}