#include <stdio.h>

#define MAX_POINTS 100

int main()
{
    int n;
    float x[MAX_POINTS], y[MAX_POINTS];
    float sum_x = 0, sum_y = 0, sum_xy = 0, sum_x_squared = 0;

    // Leer la cantidad de puntos
    scanf("%d", &n);

    // Leer los puntos (x, y)
    for (int i = 0; i < n; i++)
    {
        scanf("%f %f", &x[i], &y[i]);
        sum_x += x[i];
        sum_y += y[i];
        sum_xy += x[i] * y[i];
        sum_x_squared += x[i] * x[i];
    }

    float m = (n * sum_xy - sum_x * sum_y) / (n * sum_x_squared - sum_x * sum_x);
    float b = (sum_y - m * sum_x) / n;

    printf("%.2f\n", b);
    printf("%.2f\n", m);

    return 0;
}
