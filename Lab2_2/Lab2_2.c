#include <stdio.h>
#include <locale.h>
void main()
{
	setlocale(LC_ALL, "ru_RU.UTF-8");

	int N = 13, K = 30;
	
	printf("������ %d ����� %d ����� 00 ������\n", N, K);
	printf("���� %d ������ �����\n", K);
	printf("�� �������� �������� %d ����� � %d �����\n", N, K);
	printf("� 8.00 ������ %d ������\n", (N - 8) * 3600 + K * 60);
	printf("������� ��� = %.2f ����� � ������� ������ = %.2f ����", N/24.0, K/60.0 );
	
}