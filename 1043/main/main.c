#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a, b, c, triangle, trapezium;
    scanf("%lf %lf %lf", &a, &b, &c);

    if (a < (b+c) && b < (c+a) && c < (b+a)) {
        triangle = a + b + c;
        printf("Perimetro = %.1lf/n", triangle);
    } else {
        trapezium = ((a+b) * c) / 2;
        printf("Area = %.1lf/n", trapezium);
    }
    return 0;
}

