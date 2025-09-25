#include <stdio.h>
#include <locale.h>
void main()
{
	setlocale(LC_ALL, "RUS");

	int N = 13, K = 30;
	
	printf("Сейчас %d часов %d минут 00 секунд\n", N, K);
	printf("Идет %d минута суток\n", K);
	printf("До полуночи осталось %d часов и %d минут\n", N, K);
	printf("С 8.00 прошло %d секунд\n", (N - 8) * 3600 + K * 60);
	printf("Текущий час = %.2f суток и текущая минута = %.2f часа", N/24.0, K/60.0 );
	
}
