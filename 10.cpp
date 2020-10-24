#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main()
{
    double a, b, c;
    printf("a, b, c = ");
    scanf("%lf%lf%lf", &a, &b, &c);
    a = a > b ? a : b;
    a = a > c ? a : c;
    printf("%lf", a);
    return 0;
}
