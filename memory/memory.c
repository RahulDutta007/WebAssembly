#include <emscripten.h>

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