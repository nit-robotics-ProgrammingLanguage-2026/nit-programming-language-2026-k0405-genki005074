#include <stdio.h>

int main(void) {
    /* 課題0405: 車輪の半径はr/2[m]。距離x[m]進むための回転角度a[度]を求める。 */
    double r = 4.0;
    double pi = 3.141592;
    double x;
    double a;

    scanf("%lf", &x);
    a = x / (r * pi) * 360.0;
    printf("%f", a);
    return 0;
}
