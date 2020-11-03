#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "Russian");
	int k, i, n, m, n1, a = 0;
	printf_s("n = ");
	scanf_s("%d", &n);
	printf_s("m = ");
	scanf_s("%d", &m);
	printf_s("k = ");
	scanf_s("%d", &k);
	n1 = n;
	for (k; k <= n1; k++) {
		n = k; //от k до n
		for (i = 0; i < m; i++) {
			if (n % 2 == 0) //проверяем четность
				n /= 2;
			else n = n * 3 + 1;
			if (n == 1)break; //если и стало равно 1, то выходит из цикла
		}
		if (n != 1) {
			a = printf_s("Недостаточное m. Выход из цикла."); //возвращаем количество действительно введенных символов
			break;
		}

	}
	if (a == 0)
		printf_s("\nПрограмма выполнена успешна.Такой диапазон может существовать.");
	return 0;
}
