#include <iostream>
using namespace std;


int main() {
	setlocale(LC_ALL, "Russian");
	int x, y;

	cout << "�������� ������� �21.\n";
	cout << "������� X: ";
	cin >> x;
	cout << "������� Y: ";
	cin >> y;

	int* px = &x;
	int* py = &y;
	double meanXY = (*px + *py) / 2.0;
	cout << "������� �������������� X � Y = " << meanXY << endl;

	return 0;
}