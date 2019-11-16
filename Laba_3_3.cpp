// Laba_3_3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
using namespace std;

#include <iostream>

int main()
{
	setlocale(LC_ALL, "Russian");
	int N, i, j, p1, p2;
	i = 1;
	j = 1;
	cout << "Введите число N: ";
	cin >> N;
	cout << endl;
	cout << "Таблица Пифагора для числа N";
	cout << endl;
	cout << endl;
	for (i=1; i <= N; i++) {
		for (j=1; j <= N; j++) {
			cout << i*j <<" "<<"\t";
		};
		cout << endl;
	};
}