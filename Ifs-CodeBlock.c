#include <stdio.h>
#include <stdbool.h>

int main() {
    bool condition = true;
    int number = 1;
    if (!condition) {
        printf("Hello World!\n");
        printf("Bonjour le monde!\n");
    }
    else if (condition && number == 0)
        printf("Au revoir!\n");
    else
        printf("Si paso!\n");
    
    return 0; 
}