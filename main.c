#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

int main() {
    // Example of dereferencing a null pointer. 0x0 is never a memory address we own
    *(uintptr_t *) (0x0) = 1;

    // Will also (probably) segfault (the process we are running this program in
    // likely does not own this random address
    *(uintptr_t *) (0x69206C6) = 2;

    // We have an incomplete type. We cannot dereference an incomplete type.
    // This is NOT a null pointer error because the address returned by malloc is guaranteed
    // to be in our process's segmented memory
    void *z = malloc(50);
    printf("%d\n", *z);

    return 0;
}
