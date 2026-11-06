# Домашнее задание к работе 9

# Вариант 18

# Условие задачи
Написать программу, выводящую на экран паралелограмм, нарисованный с помощью заданного с клавиатуры символа.

# Блок схема
<img width="489" height="1032" alt="image" src="https://github.com/user-attachments/assets/2da0813a-c22e-44d8-aff9-49ea0d8ef68a" />

# Код

```c
#include <stdio.h>
#include <math.h>
int main() {
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
```
