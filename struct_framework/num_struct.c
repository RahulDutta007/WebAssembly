#include <emscripten.h>
#include <stdlib.h>

typedef struct {
    int a;
    int b;
    float c;
} pair;

int main() {
    return 0;
}

EMSCRIPTEN_KEEPALIVE
float compute_sum(pair *p) {
    return (float)(p->a + p->b) + p->c;
}

EMSCRIPTEN_KEEPALIVE
void *wasm_malloc(int n) {
    return malloc(n);
}

EMSCRIPTEN_KEEPALIVE
void wasm_free(void *ptr) {
    free(ptr);
}