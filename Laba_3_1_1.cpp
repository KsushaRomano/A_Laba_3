// Laba_3_1_1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
using namespace std;
#include <iostream>

int main()
{
	setlocale(LC_ALL, "Russian");
	int N, i, s;
	i = 2;
	s = 2;
	cout << "Введите целон число N: ";
	cin >> N;
	while (i <= N) {
		s = s * 2;
		i++;
	};
	cout << "Число 2 в степени N равно: " << s;
}