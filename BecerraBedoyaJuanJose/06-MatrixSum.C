#include <stdio.h>

#define Size 3

void FillMatrix(int Matrix[Size][Size]) {
    int i, j;

    for (i = 0; i < Size; i++) {
        for (j = 0; j < Size; j++) {
            printf("Enter the element [%d][%d]: ", i, j);
            scanf("%d", &Matrix[i][j]);
        }
    }
}

void PrintMatrix(int Matrix[Size][Size]) {
    int i, j;

    for (i = 0; i < Size; i++) {
        for (j = 0; j < Size; j++) {
            printf("%d ", Matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    static int FirstMatrix[Size][Size], SecondMatrix[Size][Size], Result[Size][Size];
    int i, j;

    printf("Enter the elements of the first matrix\n");
    FillMatrix(FirstMatrix);

    printf("Enter the elements of the second matrix\n");
    FillMatrix(SecondMatrix);

    for (i = 0; i < Size; i++) {
        for (j = 0; j < Size; j++) {
            Result[i][j] = FirstMatrix[i][j] + SecondMatrix[i][j];
        }
    }

    printf("The sum of the matrices is:\n");
    PrintMatrix(Result);

    return 0;
}