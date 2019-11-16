// Laba_3_2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

using namespace std;
#include <iostream>

int main()
{
	setlocale(LC_ALL, "Russian");
	int N, i, fac;
	i = 1;
	fac = 1;
	cout << "Введите целон число N: ";
	cin >> N;
	while (i <= N) {
		fac = i*fac;
		i++;
	};
	cout << "Факториал числа " << N <<" равен: " << fac;
}