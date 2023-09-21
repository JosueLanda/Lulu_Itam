#include <stdio.h>

int main()
{
    double a1, b1, c1, d1, a2, b2, c2, d2, a3, b3, c3, d3;

    // Leer los coeficientes del sistema de ecuaciones
    scanf("%lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf",
          &a1, &b1, &c1, &d1, &a2, &b2, &c2, &d2, &a3, &b3, &c3, &d3);

    // Calcular los valores de x, y y z
    double x = (d1 * c2 * b3 - d1 * b2 * c3 - a2 * d2 * b3 + a2 * b2 * d3 + a3 * b1 * c2 - a3 * c1 * b2) /
               (a1 * c2 * b3 - a1 * b2 * c3 - a2 * a3 * b1 + a2 * a1 * b3 + a3 * b2 * c1 - a3 * c2 * b1);

    double y = (a1 * c3 * d2 - a1 * d3 * c2 - a2 * c1 * d3 + a2 * d1 * c3 + a3 * c2 * d1 - a3 * c1 * d2) /
               (a1 * c2 * b3 - a1 * b2 * c3 - a2 * a3 * b1 + a2 * a1 * b3 + a3 * b2 * c1 - a3 * c2 * b1);

    double z = (a1 * b2 * d3 - a1 * d2 * b3 - a2 * a3 * d1 + a2 * a1 * d3 + a3 * a2 * b1 - a3 * a1 * b2) /
               (a1 * c2 * b3 - a1 * b2 * c3 - a2 * a3 * b1 + a2 * a1 * b3 + a3 * b2 * c1 - a3 * c2 * b1);

    // Imprimir los valores de x, y y z con dos decimales
    printf("%.2lf %.2lf %.2lf", x, y, z);

    return 0;
}
