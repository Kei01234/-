#include <stdio.h>

int bigger(int a, int b) {
    if (a>=b) {
        return a;
    } else {
        return b;
    }
}

int main(void) {
    printf("%d\n", bigger(1, 2));

    return 0;
}