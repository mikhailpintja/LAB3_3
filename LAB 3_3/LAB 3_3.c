// Lab3_3.c: ��������� ������� � ������� ������� �����.//
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<locale.h>
#include <math.h>
#include <conio.h>
float f; //��������� ���������//
int main()
{
	int x, y;
	setlocale(LC_CTYPE, "ukr");
	printf("\n ����i�� ��� �i��� �����: \n");
	printf("\n \t �������� x=");
	scanf("%d", &x);
	printf("\n \t �������� y=");
	scanf("%d", &y);
	if (x*y > 0)
	{
		f = (pow(x, 2) + log2(x*y) - pow(y, 2)) / (1 + pow(x, 2) + pow(y, 2));
		printf("\n ��������� ���������� �����ii ��� ������� x= %d �� y= %d ��������� %4.3f", x, y, f);
	}
	else printf("\n ������i ���� ����� x= %d �� y= %d � �������  x*y= %d < 0, \n �� �� �������� ���������� Log2(��)", x, y, x*y);

	int getch(); getch();
	return 0;
}
