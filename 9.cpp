#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main()
{
    int a, x, y, z;
    printf("number = ");
    scanf("%d", &a);
    if (a > 99 && a < 1000)
    {
        x = a % 10;
        a /= 10;
        y = a % 10;
        a /= 10;
        z = a % 10;
    }
    printf((x == y || y == z || x == z) ? "true\n" : "false\n");
    return 0;
}
