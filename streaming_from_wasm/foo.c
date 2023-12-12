#include <stdio.h>
#include <emscripten.h>

EMSCRIPTEN_KEEPALIVE
int sum_of_numbers(int n) {
    return n * (n + 1) / 2; 
}

EMSCRIPTEN_KEEPALIVE
void loop(int n) {
    int i = 0;
    while(i < n) {
        i++;
    }
}