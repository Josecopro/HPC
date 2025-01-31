#include <stdio.h>

int main() {
    enum Semana {Lunes /*0*/, Martes/*1*/, Miercoles/*2*/, Jueves/*3*/, Viernes/*4*/, Sabado/*5*/, Domingo/*6*/};
    enum Semana queso[7] = {Lunes, Martes, Miercoles, Jueves, Viernes, Sabado, Domingo};
    enum Semana dia = Lunes;
    char *dias[7] = {"Lunes", "Martes", "Miercoles", "Jueves", "Viernes", "Sabado", "Domingo"};
    printf("El dia es %d\n", dia);
    return 0; 
}