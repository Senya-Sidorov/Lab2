#include <stdio.h>
#include <locale.h>

void main() 
{
    setlocale(LC_ALL, "RUS");
    printf("Вариант 23\n");

    double V1 = 2.0, t1 = 21.0;   
    double V2 = 3.0, t2 = 40.0;   
    double V3 = 5.0, t3 = 36.0;   
    double V, T; // общий объем и температура смеси

    V = V1 + V2 + V3;
    T = (V1 * t1 + V2 * t2 + V3 * t3) / V;
    printf("\nОбъем первой порции воды: %.2f л, температура: %.2f\n", V1, t1);
    printf("Объем второй порции воды: %.2f л, температура: %.2f\n", V2, t2);
    printf("Объем третьей порции воды: %.2f л, температура: %.2f\n", V3, t3);

    printf("\nОбщий объем воды: %.2f литров\n", V);
    printf("Температура смеси: %.2f градусов\n", T);

    return 0;
}