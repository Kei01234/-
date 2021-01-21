#include <stdio.h>

double GetAverage(double *array, int num); //プロトタイプ宣言

int main(void) {
    double height[10]={0.0, 1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0};
    double ave;
    //-----
    ave=GetAverage(height, sizeof(height)/sizeof(height[0]));
    //-----
    printf("Average = %f\n", ave);
    return 0;
}

double GetAverage(double *array, int num) {
    for (int i = 0; i < num/2; ++i) {
        double tmp;
        tmp=array[i];
        array[i]=array[num-1-i];
        array[num-1-i]=tmp;
    }

    double sum=0;
    for (int i = 0; i < num; ++i) {
        sum+=array[i];
    }

    return sum/num;
}