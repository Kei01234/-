#include <stdio.h>

//-----
int multi4(int a, int b, int c, int d) {
    return a*b*c*d;
}
//-----

int main() {
    //試しに1*2*3*4の答えを表示
    printf("%d\n", multi4(1, 2, 3, 4));

    return 0;
}