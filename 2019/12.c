#include <stdio.h>
#include <math.h>

typedef struct {
    double x;
    double y;
    double t;
    double d;
} coordinate;

//-----
double GetFar(coordinate data) {
    return pow(pow(data.x, 2)+pow(data.y, 2), 1.0/2.0);
}
//-----

int main(void) {
    coordinate data;
    data.x=3;
    data.y=4;
    data.d=GetFar(data);
    data.t=0;

    //試しに表示
    printf("%f\n", data.x);
    printf("%f\n", data.y);
    printf("%f\n", data.d);
    printf("%f\n", data.t);

    return 0;
}