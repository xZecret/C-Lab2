#include <iostream>
#include <cmath>

using namespace std;
int main()

{
	cout << "\nLab2.3\n";
	int x, y;
	x = 45;
	y = -10;

	//if x < 5 y >= -10 - отсутсвуют скобки для условия и нету логического оператора
	//printf(" % d", x + y);

	if (x < 5) {
		if (y >= -10)
			printf("b) %d", x + y);// правильно
	}

	if (x < 5, y >= -10)
		printf("c) % d", x + y);// правильно

	if (x < 5 && y >= -10)
		printf("d) % d", x + y);// правильно
	// эквивалентны между собой b,d,c
}
