#include <fcntl.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    // Allocate 100 bytes
    void* mem = malloc(100);

    // Print the address of mem
    printf("%p\n", mem);

    // Reallocates (elongates) our allocated area of memory from 100 bytes to 120 bytes
    mem = realloc(mem, 120);

    // Print the address of mem
    printf("%p\n", mem);

    // Print the address of mem increment by 1 because on this system, void is sized as 1
    printf("%p\n", mem + 1);

    printf("%p\n", mem + 2);

    // Casting mem to be an int pointer
    int* casted = mem;

    // Prints the value at "casted" (which is the first 4 bytes of mem interpreted as an integer)
    printf("%d\n", *casted);

    // The address at mem + 12 is casted as an integer pointer and the value at that address is set to 8
    *(int*)(mem + 12) = 8;

    // Void isn't typed, we need to cast it. We cast the address at mem + 12 as an integer pointer and then dereference it (interpreting its bytes as an integer) which prints 8
    printf("%d\n", *(int*)(mem + 12));

    return 0;
}
