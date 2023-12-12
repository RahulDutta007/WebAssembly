#include <stdio.h>
#include <emscripten.h>

EMSCRIPTEN_KEEPALIVE
int addNums (int a, int b) {
    return a + b;
}

EMSCRIPTEN_KEEPALIVE
int main () {
    printf("Hello world %d\n", addNums(2, 4));
    return 0;
}