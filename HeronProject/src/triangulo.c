#include <stdio.h>
#include <math.h>
#include <stdbool.h>

double CalcArea(double SideA,double SideB,double SideC){
    double SemiPermimeter = (SideA + SideB + SideC) / 2.0;
    double Area = sqrt(SemiPermimeter * (SemiPermimeter - SideA) * (SemiPermimeter - SideB) * (SemiPermimeter - SideC));

    return Area;
}

void PrintResult(double Area){
    printf("El area del triangulo es: %f\n", Area);
}

void GetData(double *LadoA, double *LadoB, double *LadoC){
    double SideA,SideB,SideC;
    bool condition = true;

    do
    {
        printf("Enter the sides of the triangle: ");
        scanf("%lf %lf %lf", &SideA, &SideB, &SideC);
        if (SideA <= 0 || SideB <= 0 || SideC <= 0){
            printf("Error con los lados del triangulo, son invalidos\n");
        }
        else{
            if (SideA + SideB > SideC && SideB + SideC > SideA && SideC + SideA > SideB){
                double Area = CalcArea(SideA, SideB, SideC);
                PrintResult(Area);
                condition = false;
            }
            else{
                printf("Los Lados son desiguales, intentelo denuevo\n");
            }

        }

    } while (condition); 
}

    