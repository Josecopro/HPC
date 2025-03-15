#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

int Sum(float a, float b){
    return a + b;
}
int Sub(float a, float b){
    return a - b;
}
int Mul(float a, float b){
    return a * b;
}
float Div(float a, float b){
    return a / b;
}
int Powerof(float a, float b){
    int result = 1;
    for (int i = 0; i < b; i++){
        result = result * a;
    }
    return result;
}

float root(float a, float b){
    float res;
    res =  pow(a, 1/b);
    return res;
}

int main(){
    float a, b; 

    int option;
    int random = rand() % 10;
    bool flag = false;
    printf("Enter the first number: ");
    scanf("%f", &a);
    printf("Enter the second number: ");
    scanf("%f", &b);
    printf("Select the operation you want to perform:\n");
    printf("1. Sum\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Power\n");
    printf("6. Root\n");
    scanf("%d", &option);
    do {
    switch(option){
        case 1:
            printf("The result is: %d\n", Sum(a, b));
            if (random > 5)
                flag = true;
            if (a > 0 && flag)
                printf("uwu");

            break;
        case 2:
            printf("The result is: %d\n", Sub(a, b));
            break;
        case 3:
            printf("The result is: %d\n", Mul(a, b));
            break;
        case 4:
            printf("The result is: %d\n", Div(a, b));
            break;
        case 5:
            printf("The result is: %d\n", Powerof(a, b));
            break;
        case 6:
            printf("The result is: %f\n", root(a, b));
            break;
        default:
            printf("Invalid option\n");
            break;
    }
    } while(option < 1 || option > 6);
    

}