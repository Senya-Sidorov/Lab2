#include <stdio.h>
#include <locale.h>

void main() 
{
    setlocale(LC_ALL, "RUS");
    printf("������� 23\n");

    double V1 = 2.0, t1 = 21.0;   
    double V2 = 3.0, t2 = 40.0;   
    double V3 = 5.0, t3 = 36.0;   
    double V, T; // ����� ����� � ����������� �����

    V = V1 + V2 + V3;
    T = (V1 * t1 + V2 * t2 + V3 * t3) / V;
    printf("\n����� ������ ������ ����: %.2f �, �����������: %.2f\n", V1, t1);
    printf("����� ������ ������ ����: %.2f �, �����������: %.2f\n", V2, t2);
    printf("����� ������� ������ ����: %.2f �, �����������: %.2f\n", V3, t3);

    printf("\n����� ����� ����: %.2f ������\n", V);
    printf("����������� �����: %.2f ��������\n", T);

    return 0;
}