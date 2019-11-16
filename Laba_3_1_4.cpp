// Laba_3_1_4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
using namespace std;
#include <Math.h>
#include <iostream>

int main()
{

	setlocale(LC_ALL, "Russian");
	float N, i, k;
	i = 1;
	k = 0;
	cout << "Введите целон число N: ";
	cin >> N;
	while (i <= N) {
		k = sqrt(2 + k);
		i++;
	};
	cout << "Число 2 в " << N << " степени равно: " << k;
}