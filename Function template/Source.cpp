#include <iostream>
using namespace std;

inline float mean(float num1, float num2) { // ������� float, ����� ��.�������������� ��������� ��������. 
	return (num1 + num2) / 2;
}

int max(int num1,int num2, int num3);
float max(float num1, float num2, float num3);
double max(double num1, double num2, double num3);

template <typename T> T func(T array[], int len);


int main() {
	setlocale(LC_ALL, "Russian");

	/*������ 1. �������� ������������ �������, ������� ���������
	��� ����� � ���������� �� ������� ��������������.
	*/
	cout << "������ 1.\nC������ �������������� : ";
	cout << mean(4, 5) << endl;

	/*������ 2.���������� ������������� ������� ��� ����������
	������������� �� ��� ���������. ������� ������
	������������ ���� int, float � double.*/
	cout << "������ 2\n";
	cout << max(2, 3, 5) << endl;
	cout << max(2.4, 3.1, 6.8) << endl;
	cout << max(2.4555, 3.12563, 5.68) << endl;

	/*������ 3.�������� ��������� ������� ��� ����������
	������������� �������� �������. ������� ������
	�������� � ����� ����� ������.*/
	cout << "������ 3.\n����������� ������:\n[";
	int z3[5] = { 2,5,6,7,9 };
	for (int i = 0; i < 5; i++)
		cout << z3[i] << ", ";
	cout << "\b\b]\n";
	cout << "������������ ������� �������: " << func(z3, 5) << endl;
	float z31[3] = { 2.1, 5.9, -8.3 };
	cout << "����������� ������:\n[";
	for (int i = 0; i < 3; i++)
		cout << z31[i] << ", ";
	cout << "\b\b]\n";
	cout << "������������ ������� �������: " << func(z31, 3) << endl;

	return 0;
}

	//������ 2.
int max(int num1, int num2, int num3) {
	int max = num1;
	if (num1 > num2 && num1 > num3)
		max = num1;
	else
		if (num2 > num1 && num2 > num3)
			max = num2;
		else
			max = num3;
	return max;
}
float max(float num1, float num2, float num3) {
	float max = num1;
	if (num1 > num2 && num1 > num3)
		max = num1;
	else
		if (num2 > num1 && num2 > num3)
			max = num2;
		else
			max = num3;
	return max;
}

double max(double num1, double num2, double num3) {
	double max = num1;
	if (num1 > num2 && num1 > num3)
		max = num1;
	else
		if (num2 > num1 && num2 > num3)
			max = num2;
		else
			max = num3;
	return max;
}

	//������ 3.
template <typename T> T func(T array[], int len) {
	T max = array[0];
	for (int i = 0; i < len; i++)
		if (array[i] > max)
			max = array[i];
	return max;
}