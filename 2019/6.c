#include <stdio.h>

double GetAverage(double *array, int num); //プロトタイプ宣言
int main(void)
{
    double height[10]={0.0, 1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0};
    double ave;
    //-----
    ave=GetAverage(height, sizeof(height)/sizeof(height[0]));
    //-----
    printf("Average = %f\n", ave);
    return 0;
}