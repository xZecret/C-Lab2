#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main()
{
	int d;
	printf("day? ");
	scanf("%d", &d);
	d %= 7;
	switch (d)
	{
	case 6:
		printf("Ura- subbota!");
		break ;
	case 0:
		printf("Ura- voskresenie!");
		break;
	default:
		printf("Uvi- rabota(((");
		break;
	}
	return 0;
}
