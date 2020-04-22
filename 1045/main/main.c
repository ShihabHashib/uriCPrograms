#include <stdio.h>

int main() {

    double a, b, c, hudai;
    scanf("%lf %lf %lf", &a, &b, &c); // Input 3 numbers

    // Decreasing Order Algorithm
    if (a < b) {
        hudai = a;
        a = b;
        b = hudai;
    }

    if (b < c) {
        hudai = b;
        b = c;
        c = hudai;
    }

    if (a < b) {
        hudai = a;
        a = b;
        b = hudai;
    } // Decreasing Order Algorithm  END


    if (a >= b + c) {
        printf("NAO FORMA TRIANGULO\n");
    } else if (a * a == b * b + c * c) {
        printf("TRIANGULO RETANGULO\n");
    } else if (a * a > b * b + c * c) {
        printf("TRIANGULO OBTUSANGULO\n");
    } else if (a * a < b * b + c * c) {
        printf("TRIANGULO ACUTANGULO\n");
    }


    if (a == b && b == c) {
        printf("TRIANGULO EQUILATERO\n");
    } else if (a == b || b == c) {
        printf("TRIANGULO ISOSCELES\n");
    }
    return 0;

}
