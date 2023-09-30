#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <stddef.h>

int main() {
    void *mem = malloc(100);
    printf("%p\n", mem);
    mem = realloc(mem, 120);
    printf("%p\n", mem);
    return 0;
}
