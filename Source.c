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
		n = k; //�� k �� n
		for (i = 0; i < m; i++) {
			if (n % 2 == 0) //��������� ��������
				n /= 2;
			else n = n * 3 + 1;
			if (n == 1)break; //���� � ����� ����� 1, �� ������� �� �����
		}
		if (n != 1) {
			a = printf_s("������������� m. ����� �� �����."); //���������� ���������� ������������� ��������� ��������
			break;
		}

	}
	if (a == 0)
		printf_s("\n��������� ��������� �������.����� �������� ����� ������������.");
	return 0;
}
