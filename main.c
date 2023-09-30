#include <stdio.h>
#include <stdlib.h>

int main() {
    void *x = malloc(100); // This allocates 100 bytes
    printf("%p\n", x); // This prints the memory address of x

    printf("%d\n", *(int *) x); // I am interpreting the first four bytes of that 100 allocated bytes as an integer
    printf("%f\n", *(double *) x); // I am interpreting the first eight bytes of that 100 allocated bytes as a double
    printf("%lu\n", *(size_t *) x); // I am interpreting the first eight bytes of that 100 allocated bytes as a size_t

    free(x); // This frees all the memory at x
    return 0;
}
