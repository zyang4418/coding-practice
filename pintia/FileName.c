#include <stdio.h>

int main() {
    double len, high, x, y, z;
    scanf("%lf %lf %lf %lf %lf", &len, &high, &x, &y, &z);

    double abef, ecgh, dfhg;
    abef = (x + y) * high / 2;
    printf("Area of ABEF is %.3lf\n", abef);
    ecgh = (len - x) * high / 4 + ( (y - x) / 2 + len - y) * z / 2;
    printf("Area of ECGH is %.3lf\n", ecgh);
    dfhg = (high - z) * ( (y - x) / 2 + len - y) / 2 + (len - y) * high / 4;
    printf("Area of DFHG is %.3lf\n", dfhg);

    return 0;
}