#include <stdio.h>
#include <stdlib.h>

typedef struct {
    double x;
    double y;
    double t;
    double d;
} coordinate;

int main(void) {
    //-----
    int num=3;

    coordinate *array;
    array=(coordinate *)malloc(num*sizeof(coordinate));
    //-----

    //試しに値を代入して表示
    array[0].x=1;
    array[0].y=0;
    array[0].d=0;
    array[0].t=0;

    printf("%f\n", array[0].x);
    printf("%f\n", array[0].y);
    printf("%f\n", array[0].d);
    printf("%f\n", array[0].t);

    return 0;
}