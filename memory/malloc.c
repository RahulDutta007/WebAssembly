#include <emscripten.h>
#include <stdlib.h>

EMSCRIPTEN_KEEPALIVE
int accumulate(int *arr, int size) {
    int sum = 0;
    while(size) {
        sum = sum + arr[--size];
    }
    return sum;
}

EMSCRIPTEN_KEEPALIVE
const char* get_string() {
    return "Hello, World XYZ";
}

EMSCRIPTEN_KEEPALIVE
int main () {
    return 0;
}

EMSCRIPTEN_KEEPALIVE
void *wasm_malloc(int n) {
    return malloc(n);
}

EMSCRIPTEN_KEEPALIVE
void wasm_free(void *ptr) {
    free(ptr);
}