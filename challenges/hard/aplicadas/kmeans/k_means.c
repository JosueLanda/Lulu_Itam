#include <stdio.h>
#include <math.h>

#define MAX_N 1000
#define MAX_D 10
#define MAX_K 10

double puntos[MAX_N][MAX_D];
double centroides[MAX_K][MAX_D];
int asignaciones[MAX_N];

int n, d, k;

// Función para calcular la distancia euclidiana entre dos puntos
double distancia(double punto1[], double punto2[])
{
    double suma = 0.0;
    for (int i = 0; i < d; i++)
    {
        suma += pow(punto1[i] - punto2[i], 2);
    }
    return sqrt(suma);
}

// Función para asignar cada punto al centroide más cercano
void asignarPuntos()
{
    for (int i = 0; i < n; i++)
    {
        double minDistancia = distancia(puntos[i], centroides[0]);
        asignaciones[i] = 0;

        for (int j = 1; j < k; j++)
        {
            double dist = distancia(puntos[i], centroides[j]);
            if (dist < minDistancia)
            {
                minDistancia = dist;
                asignaciones[i] = j;
            }
        }
    }
}

// Función para recalcular los centroides
void recalcularCentroides()
{
    for (int i = 0; i < k; i++)
    {
        int numPuntos = 0;
        double nuevoCentroide[MAX_D] = {0.0};

        for (int j = 0; j < n; j++)
        {
            if (asignaciones[j] == i)
            {
                numPuntos++;
                for (int l = 0; l < d; l++)
                {
                    nuevoCentroide[l] += puntos[j][l];
                }
            }
        }

        if (numPuntos > 0)
        {
            for (int l = 0; l < d; l++)
            {
                nuevoCentroide[l] /= numPuntos;
            }
            for (int l = 0; l < d; l++)
            {
                centroides[i][l] = nuevoCentroide[l];
            }
        }
    }
}

int main()
{
    scanf("%d %d %d", &n, &d, &k);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < d; j++)
        {
            scanf("%lf", &puntos[i][j]);
        }
    }

    // Inicializar centroides aleatorios
    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j < d; j++)
        {
            centroides[i][j] = puntos[i][j];
        }
    }

    for (int i = 0; i < 100; i++)
    { // Número máximo de iteraciones
        asignarPuntos();
        recalcularCentroides();
    }

    // Imprimir centroides
    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j < d; j++)
        {
            printf("%.4lf ", centroides[i][j]);
        }
        printf("\n");
    }

    return 0;
}
