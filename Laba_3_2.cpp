using namespace std;

#include <iostream>

int main()
{
	setlocale(LC_ALL, "Russian");
	int b, i;
	double sr;
	i = 100;
	sr = 0;
	cout << "Введите значение b: ";
	cin >> b;
	if (b < 100) { cout << "Введено неправильное значение b"; }
	else
	{
		for (i; i <= b; i++) {
			sr = sr + (i * i);
		}
		sr = sr / ((b+1) - 100);
		cout << "Среднее арифметическое квадратов равно: " << sr;
	}
}