// Lab3_3.c: Обрахунок функції з аналізом вхідних даних.//
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<locale.h>
#include <math.h>
#include <conio.h>
float f; //Результат обчислень//
int main()
{
	int x, y;
	setlocale(LC_CTYPE, "ukr");
	printf("\n Введiть два цiлих числа: \n");
	printf("\n \t Значення x=");
	scanf("%d", &x);
	printf("\n \t Значення y=");
	scanf("%d", &y);
	if (x*y > 0)
	{
		f = (pow(x, 2) + log2(x*y) - pow(y, 2)) / (1 + pow(x, 2) + pow(y, 2));
		printf("\n Результат розрахунку функцii при заданих x= %d та y= %d становить %4.3f", x, y, f);
	}
	else printf("\n Введенi Вами числа x= %d та y= %d в добутку  x*y= %d < 0, \n що не дозволяє обрахувати Log2(ху)", x, y, x*y);

	int getch(); getch();
	return 0;
}
