#include <stdio.h>
int main(void) {
    long double a1; 
    double a2;
    float a3;
    scanf("%Lf", &a1);
    a2 = a1;
    a3 = a1;
    printf("FLOAT: %.6f\n", a3);
    printf("DOUBLE: %.6f\n", a2);
    printf("LDOUBLE: %.6Lf\n", a1);
    printf("FLOAT+1: %.6f\n", a3+1);
    printf("DOUBLE+1: %.6f\n", a2+1);
    printf("LDOUBLE+1: %.6Lf\n", a1+1);
    return 0;
}