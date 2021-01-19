#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct {
    double x;
    double y;
    double t;
    double d;
} coordinate;

double GetFar(coordinate data) {
    return pow(pow(data.x, 2)+pow(data.y, 2), 1.0/2.0);
}

//-----
void calculateSpeed(coordinate *array, int num) {
    int index;
    do {
        index=rand()%num;
    } while (index==0);

    double speed=fabs((array[index].d-array[index-1].d)/(array[index].t-array[index-1].t));

    printf("時刻%dの速度は%f\n", (int)array[index].t, speed);
}
//-----

int main(void) {
    int num=3;

    coordinate array[num];

    for (int i = 0; i < num; ++i) {
        array[i].x=rand()%10;
        array[i].y=rand()%10;
        array[i].d=GetFar(array[i]);
        array[i].t=i;
    }

    calculateSpeed(array, num);

    return 0;
}