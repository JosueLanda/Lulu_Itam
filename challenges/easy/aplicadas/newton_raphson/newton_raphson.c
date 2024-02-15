#include <stdio.h>
#include <math.h>

double f(double x)
{
    return x * x - 5;
}

double f_prime(double x)
{
    return 2 * x;
}

double newton_raphson(double x0, double epsilon)
{
    double x = x0;
    while (fabs(f(x)) > epsilon)
    {
        x = x - f(x) / f_prime(x);
    }
    return x;
}

int main()
{
    double x0, epsilon;
    scanf("%lf %lf", &x0, &epsilon);

    double root = newton_raphson(x0, epsilon);

    printf("%.4lf", root);

    return 0;
}
