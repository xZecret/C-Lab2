#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>

int main()
{
	int A, B, C;
	printf("Vvedite A,B,C\n");
	scanf("%d", &A);
	scanf("%d", &B);
	scanf("%d", &C);
	if ((A % 2 == 0) || (B % 2 == 0) || (C % 2 == 0)) printf("\nYes");
	else printf("No");
}
