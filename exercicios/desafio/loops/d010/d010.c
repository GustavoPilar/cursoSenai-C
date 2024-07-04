#include <stdio.h>
#include <math.h>

int main() {

    int a, b, c, delta;
    printf("a: ");
    scanf("%d", &a);
    printf("b: ");
    scanf("%d", &b);
    printf("c: ");
    scanf("%d", &c);

    delta = (pow(b, 2)) - 4 * a * c;

    double x1 = -b + (sqrt(delta)) / (2 * a);
    double x2 = -b - (sqrt(delta)) / (2 * a);

    printf("X1: %.4lf\n", x1);
    printf("X2: %.4lf\n", x2);

    return 0;
}
