#include <stdio.h>
int main() {
    const float pi=3.14;
    double radius;
    scanf("%lf",&radius);
    printf("Area: %.2f",pi*radius*radius);
    return 0;
}