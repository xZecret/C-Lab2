#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main()
{
    int v, f;
    printf("v = ");
    scanf("%d", &v);
    printf("fish = ");
    scanf("%d", &f);
    if (f*3<=v)
    {
        printf("true");
    }
    else
    {
        printf("lishniia fish = %d", f - v / 3);
    }
    return 0;

}
