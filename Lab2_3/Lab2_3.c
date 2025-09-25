#include <stdio.h>
#include <locale.h>
void main() 
{
	double L = 213.0, n = 3.0, k = 2 , m = 2;

	setlocale(LC_ALL, "RUS");
	printf("Дано:\n");
	printf("           %.0f     \n", n);
	printf("         %.0f       \n", L);
	printf("        ________  \n");
	printf("Ответ:\n");
	printf("        +0%2.2f", n / L);
}
