#include <stdio.h>

int main()
{
    int a, b, r;
    scanf("%d", &b);
    scanf("%d", &a);
    r = a % b;
    while (r > 0)
    {
        if (a > b)
        {

            a = b;
            b = r;
            r = a % b;
        }
    }
    printf("%d", b);
    return 0;
}