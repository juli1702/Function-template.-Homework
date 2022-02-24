#include <iostream>
using namespace std;

inline float mean(float num1, float num2) { // Сделала float, чтобы ср.арифметическое считалось корретно. 
	return (num1 + num2) / 2;
}

int max(int num1,int num2, int num3);
float max(float num1, float num2, float num3);
double max(double num1, double num2, double num3);

template <typename T> T func(T array[], int len);


int main() {
	setlocale(LC_ALL, "Russian");

	/*Задача 1. Создайте встраиваемую функцию, которая принимает
	два числа и возвращает их среднее арифметическое.
	*/
	cout << "Задача 1.\nCреднее арифметическое : ";
	cout << mean(4, 5) << endl;

	/*Задача 2.Реализуйте перегруженную функцию для нахождения
	максимального из трёх элементов. Функция должна
	поддерживать типы int, float и double.*/
	cout << "Задача 2\n";
	cout << max(2, 3, 5) << endl;
	cout << max(2.4, 3.1, 6.8) << endl;
	cout << max(2.4555, 3.12563, 5.68) << endl;

	/*Задача 3.Напишите шаблонную функцию для нахождения
	максимального элемента массива. Функция должна
	работать с любым типом данных.*/
	cout << "Задача 3.\nИзначальный массив:\n[";
	int z3[5] = { 2,5,6,7,9 };
	for (int i = 0; i < 5; i++)
		cout << z3[i] << ", ";
	cout << "\b\b]\n";
	cout << "Максимальный элемент массива: " << func(z3, 5) << endl;
	float z31[3] = { 2.1, 5.9, -8.3 };
	cout << "Изначальный массив:\n[";
	for (int i = 0; i < 3; i++)
		cout << z31[i] << ", ";
	cout << "\b\b]\n";
	cout << "Максимальный элемент массива: " << func(z31, 3) << endl;

	return 0;
}

	//Задача 2.
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

	//Задача 3.
template <typename T> T func(T array[], int len) {
	T max = array[0];
	for (int i = 0; i < len; i++)
		if (array[i] > max)
			max = array[i];
	return max;
}