#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <math.h>
#define ROW 9
#define COL 9
#define M_PI 3.14

int main() {
	setlocale(LC_ALL, "RUS");
	// task_1();
	// task1_1();
	// task1_2();
	// task_2();
	task_3();
	return 0;
}

int task_1() {
	int row, col;
	printf("\n");
	for (row = 1; row <= ROW; ++row) 
	{
		for (col = 1; col <= COL; col++) {
			printf("%5d", col * row);

		}
		printf("\n");
	}
	return 0;
}

int task1_1() {
	int row, col, n = 5;
	for (row = 1; row <= n; row++)
	{
		for (col = 1; col <= row; col++) {
			printf("%5d", col * row);
		}
		printf("\n");
	}
	return 0;
}

int task1_2() {
	// 9
	int row, col, n = 5;
	for (row = 0; row < n; row++) { 
		int c = (row + 1) * 5;
		for (col = 0; col < n - row; col++) {
			printf("%5d", c);
		}
		printf("\n");
	}
	return 0;
}

int task_2() {
	long long num;
	int t, sum = 0, a;
	char choice;
	do {
		printf("введите число:\n");
		scanf("%lld", &num);
		t = num / 10; // отбрасываем последнюю цифру
		printf("число без последней цифры - %d\n ", t);
		while (t != 0) {
			a = t % 10; // последняя цифра
			if (a % 2 == 0) sum += a; // складываем четные цифры
			t = t / 10; // отбрасываем последнюю цифру
		}
		printf("сумма четных цифр в числе = %d\n", sum);
		printf("продолжить? (да - y, нет - n)\n");
		scanf(" %c", &choice);
	} while (choice == 'y' || choice == 'Y');
	return 0;
}

int task_3() {
	// 18
	char ch;
	int h, a, A;
	double shift, rad_A;
	const int b = 5;
	printf("\n--- рисование параллелограмма ---\n");
	printf("введите символ: \n");
	scanf("%c", &ch);
	printf("введите высоту параллелограмма: \n");
	scanf("%d", &h);
	printf("введите значение стороны а: \n");
	scanf("%d", &a);
	printf("введите значение острого угла А (< 90 градусов): \n");
	scanf("%d", &A);
	rad_A = A * M_PI / 180.0;
	shift = tan(rad_A); //наклон параллелограмма
	for (int row = 1; row <= h; row++) {
		int sp = (int)(row * shift); //сколько пробелов нужно сделать
		for (int i = 0; i < sp; i++) {
			printf(" ");
		}
		for (int col = 1; col <= a; col++) {
			printf("%c", ch);
		}
		printf("\n");
	}

	return 0;
}
