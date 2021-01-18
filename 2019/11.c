#include <stdio.h>

typedef struct {
    double x;
    double y;
    double t;
    double d;
} coordinate;

//-----
void SetZero(coordinate *data) {
    data->x=0;
    data->y=0;
    data->d=0;
    data->t=0;
}
//-----

int main(void) {
    coordinate data;

    SetZero(&data);

    //試しに表示
    printf("%f\n", data.x);
    printf("%f\n", data.y);
    printf("%f\n", data.d);
    printf("%f\n", data.t);

    return 0;
}