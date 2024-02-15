#include <stdio.h>

int main()
{
    float x, y, determinantex, determinantey, determinante, a, b, c, d, e, f;

    // Leer los coeficientes de la primera ecuacion y su respuesta
    scanf("%f %f %f", &a, &b, &c);

    // Leer los coeficientes de la segunda ecuacion y su respuesta
    scanf("%f %f %f", &d, &e, &f);

    determinantex = (c * e) - (b * f);
    determinantey = (a * f) - (c * d);
    determinante = (a * e) - (b * d);

    if (determinante == 0)
    {
        printf("No existe solucion unica");
    }
    else
    {
        x = determinantex / determinante;
        y = determinantey / determinante;
        printf("%.2f %.2f ", x, y);
    }

    return 0;
}