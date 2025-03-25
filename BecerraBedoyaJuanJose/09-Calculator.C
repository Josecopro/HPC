#include <stdio.h>

int Sum(int *a, int *b) { return *a + *b; }

int Sub(int *a, int *b) { return *a - *b; }

int Multiplication(int *a, int *b) { return (*a) * (*b); }

int Division(int *a, int *b) {
    if (*b == 0) return 0;
    return *a / *b;
}

int GetOperator(char Operator, int *NumA, int *NumB) {
    switch (Operator) {
        case '+':
            return Sum(NumA, NumB);
        case '-':
            return Sub(NumA, NumB);
        case '*':
            return Multiplication(NumA, NumB);
        case '/':
            return Division(NumA, NumB);
        default:
            printf("Selector No valido\n");
            return 0;
    }
}

int main() {
    int NumA, NumB;
    char Operator;

    printf("Cual es tu primer numero\n: ");
    scanf("%d", &NumA);
    printf("Cual es tu segundo numero\n: ");
    scanf("%d", &NumB);
    printf("Que operacion deseas utilizar\n: ");
    scanf(" %c", &Operator);

    int result = GetOperator(Operator, &NumA, &NumB);
    printf("El resultado es: %d\n", result);
    
    return 0;
}