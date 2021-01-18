#include <stdio.h>
#include <stdlib.h>

double * findMax(double *array, int num) {
    double max=array[0];
    double *maxPointer;
    for (int i = 1; i < num; ++i) {
        if (max<array[i]) {
            max=array[i];
            maxPointer=&array[i];
        }
    }

    return maxPointer;
}

int main(void) {
    int i, n; //nは要素数, iはfor文で利用
    double max, *dat; //maxは最大値を保存，datはデータを保存する配列
    n=1000;
    dat = (double *)malloc(n*sizeof(double));
    double maxI=0;
    for(i=0; i<n; i++){ dat[i] = (double)rand()/RAND_MAX; }
    //-----
    max=*findMax(dat, n);
    //-----
    printf("%f", max);

    return 0;
}