#include <stdio.h>

//-----
void summul4(int a, int b, int c, int d, double *sum, double *mul) {
    *sum=(double)a+(double)b+(double)c+(double)d;
    *mul=(double)a*(double)b*(double)c*(double)d;
}
//-----

int main() {
    double sum, mul;
    //試しに1+2+3+4と1*2*3*4を計算
    summul4(1, 2, 3, 4, &sum, &mul);
    printf("%f\n", sum);
    printf("%f\n", mul);

    return 0;
}