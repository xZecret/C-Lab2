#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main()
{
    int m, n, s;
    printf("min = ");
    scanf("%d", &m);
    printf("sec = ");
    scanf("%d", &n);
    s = (m * 60 + n) * 16;
    printf((6 * 1024 >= s) ? "true" : "false");
    return 0;

}
