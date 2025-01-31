#include <stdio.h>
#include <stdbool.h>

int main() {
    bool condition = true;
    if (!condition) {
        printf("Hello World!\n");
    }
    else if (condition)
    {
        printf("Au revoir!\n");
    }
    else
    {
        printf("This should never happen\n");
    }
    
    return 0; 
}