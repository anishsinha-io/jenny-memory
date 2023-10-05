#include <stdio.h>
#include <stdlib.h>

int fn() { return 5; }
double fn2() { return 5.0; }

void fn3() {}

int* fn4() {
    int* x = malloc(sizeof(int));
    *x = 5;
    return x;
}

int main() {
    int* res = fn4();
    printf("%d\n", *res);
    free(res);
    return 0;
}
