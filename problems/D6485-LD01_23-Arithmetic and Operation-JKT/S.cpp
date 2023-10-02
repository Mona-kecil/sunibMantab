#include <stdio.h>
#include <math.h>
int main() {
    double L, B, H;
    scanf("%lf %lf %lf", &L, &B, &H);
    // surface area for equilateral triangular prism
    // double surface_area = B * B * sqrt(3) / 2 + 3 * B * L;
    double surface_area = B*H + 3*B*L;
    printf("%.3f\n", surface_area);
    return 0;
}
