#include <iostream>
using namespace std;


int main() {
	setlocale(LC_ALL, "Russian");
	int x, y;

	cout << "Домашнее задание №21.\n";
	cout << "Введите X: ";
	cin >> x;
	cout << "Введите Y: ";
	cin >> y;

	int* px = &x;
	int* py = &y;
	double meanXY = (*px + *py) / 2.0;
	cout << "Среднее арифметическое X и Y = " << meanXY << endl;

	return 0;
}