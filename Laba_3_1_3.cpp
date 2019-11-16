// Laba_3_3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
using namespace std;

#include <iostream>

int main()
{
	setlocale(LC_ALL, "Russian");
	int N, i, p;
	i = 1;
	p = 1;
	cout << "Введите целон число N: ";
	cin >> N;
	while (i <= N) {
		p = p * (1 + (1/(i*i)));
		i++;
	};
	cout << "Произведение: " << p;
}
