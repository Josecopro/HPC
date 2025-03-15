#include <stdio.h>
#include <stdbool.h>

int main(){
    int number = 1;
    int *p = &number;
    int sum;
    *p = 2;
    sum = number + *p;

    printf("%d\n", sum);


    return 0;

}