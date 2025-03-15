#include <stdio.h>
#include <stdlib.h>

int main(){
    long n;
    printf("Enter the number of terms: ");
    scanf("%ld", &n);
    long *fib = (long *)malloc(n * sizeof(long));
    fib[0] = 0;
    fib[1] = 1;
    for(long i = 2; i < n; i++){
        fib[i] = fib[i - 1] + fib[i - 2];
    }
    for(long i = 0; i < n; i++){
        printf("%ld ", fib[i]);
    }
    free(fib);
    return 0;
}