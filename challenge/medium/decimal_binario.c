#include "stdio.h"
#define N 100

int main()
{
    int n, conversion[N];
    int i;
    while (1)
    {
        i = 0;
        scanf("%d", &n);
        while (n > 0)
        {
            conversion[i] = n % 2;
            i = i + 1;
            n = n / 2;
        }
        for (i--; i >= 0; i--)
        {
            printf("%d", conversion[i]);
        }
        printf("\n");
    }
    return 0;
}