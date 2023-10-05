#include <stdlib.h>

int fn() { return 5; }
double fn2() { return 5.0; }

void fn3() {}

int* fn4() {
    int* x = malloc(sizeof(int));
    *x = 5;
    return x;
}

int main() { return 0; }
