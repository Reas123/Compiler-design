#include <stdio.h>
#include <stdlib.h>

// Function to demonstrate stack allocation
void stackFunction() {
    int stackVar = 10; // allocated on stack
    printf("Stack Variable Value: %d\n", stackVar);
    printf("Address of Stack Variable: %p\n", (void*)&stackVar);
}

// Function to demonstrate heap allocation
void heapFunction() {
    int *heapVar = (int *)malloc(sizeof(int)); // allocated on heap

    if (heapVar == NULL) {
        printf("Memory allocation failed!\n");
        return;
    }

    *heapVar = 20;
    printf("Heap Variable Value: %d\n", *heapVar);
    printf("Address of Heap Variable: %p\n", (void*)heapVar);

    free(heapVar); // free the allocated memory
}

int main() {
    printf("Demonstrating Stack and Heap Memory Management in C\n\n");

    // Stack allocation
    stackFunction();

    printf("\n");

    // Heap allocation
    heapFunction();

    return 0;
}


