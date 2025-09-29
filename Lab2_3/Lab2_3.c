#include <stdio.h>
#include <locale.h>
int main()
{
	int L = 213.0, n = 3.0, k = 2, m = 2;
	float result = (float)n / L;

	setlocale(LC_ALL, "ru_RU.UTF-8");
	printf("Дано:\n");
	printf("%11.d\n", n);
	printf("%11.d\n", L);
	printf("______________\n");
	printf("Ответ:\n");
	printf("%7c %+4.2f\n", ' ', result);

	return 0;	
}
