#include <stdio.h>

//-----
double sum4(int a, int b, int c, int d) {
    return (double)(a+b+c+d);
}
//-----

int main() {
    //試しに0+1+2+3の答えを表示
    printf("%f\n", sum4(0, 1, 2, 3));

    return 0;
}