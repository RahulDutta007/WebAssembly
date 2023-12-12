#include <emscripten.h>
#include <stdlib.h>

EMSCRIPTEN_KEEPALIVE
extern void logProgress(double progress); 

EMSCRIPTEN_KEEPALIVE
extern unsigned int currTime();

EMSCRIPTEN_KEEPALIVE
unsigned char* rand_string(int len) {
    unsigned char *str = malloc(len + 1);

    srand(currTime());

    for(int i = 0; i < len; i++) {
        str[i] = rand() % (127 - 33) + 33;
        logProgress((double)(i + 1)/ (double)(len));
    }

    str[len] = 0;

    return str;
}

int main() {
    return 0;
}