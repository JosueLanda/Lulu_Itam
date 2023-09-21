#include <stdio.h>

int verificaGrupo(int n, int elementos[], int tablaMultiplicacion[][n])
{
    // Paso 1: Verificar asociatividad
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < n; k++)
            {
                int a = elementos[i];
                int b = elementos[j];
                int c = elementos[k];

                int resultado1 = tablaMultiplicacion[a - 1][tablaMultiplicacion[b - 1][c - 1] - 1];
                int resultado2 = tablaMultiplicacion[tablaMultiplicacion[a - 1][b - 1] - 1][c - 1];

                if (resultado1 != resultado2)
                {
                    printf("No cumple la propiedad de asociatividad\n");
                    return 0; // No cumple la propiedad de asociatividad
                }
            }
        }
    }

    // Paso 2: Verificar existencia de elemento neutro
    int neutroEncontrado = 0;
    for (int i = 0; i < n; i++)
    {
        int esNeutro = 1;
        for (int j = 0; j < n; j++)
        {
            if (tablaMultiplicacion[elementos[i] - 1][elementos[j] - 1] != elementos[j] ||
                tablaMultiplicacion[elementos[j] - 1][elementos[i] - 1] != elementos[j])
            {
                esNeutro = 0;
                break;
            }
        }
        if (esNeutro)
        {
            neutroEncontrado = 1;
            break;
        }
    }

    if (!neutroEncontrado)
    {
        printf("No se encontro el elemento neutro\n");
    }

    // Paso 3: Verificar existencia de inversos
    int inversosEncontrados = 1;
    for (int i = 0; i < n; i++)
    {
        int tieneInverso = 0;
        for (int j = 0; j < n; j++)
        {
            if (tablaMultiplicacion[elementos[i] - 1][elementos[j] - 1] == elementos[n - 1] &&
                tablaMultiplicacion[elementos[j] - 1][elementos[i] - 1] == elementos[n - 1])
            {
                tieneInverso = 1;
                break;
            }
        }
        if (!tieneInverso)
        {
            inversosEncontrados = 0;
            break;
        }
    }

    if (!inversosEncontrados)
    {
        printf("No se encontraron inversos\n");
    }

    // Para que G sea un grupo, deben cumplirse los tres pasos
    return neutroEncontrado && inversosEncontrados;
}

int main()
{
    int n;
    scanf("%d", &n);

    int elementos[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &elementos[i]);
    }

    int tablaMultiplicacion[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &tablaMultiplicacion[i][j]);
        }
    }

    int esGrupo = verificaGrupo(n, elementos, tablaMultiplicacion);

    if (esGrupo)
    {
        printf("SI");
    }
    else
    {
        printf("NO");
    }

    return 0;
}
