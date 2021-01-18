#include <stdio.h>

//-----
int findMin(int *array, int num) {
    int min=array[0];
    for (int i = 1; i < num; ++i) {
        if (min>array[i]) {
            min=array[i];
        }
    }

    return min;
}
//-----

int main() {
    //試しに動かしてみる
    int array[]={3, 4, 2, 1, 5};
    int num=5;
    printf("%d\n", findMin(array, num));

    return 0;
}