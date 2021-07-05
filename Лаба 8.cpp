#include <iostream>
using namespace std;



double func(int* arr, int size) {//поиск среднего арифметического перебором
	double s = 0;
	for (int i = 0; i < size; i++)
		s += arr[i];
	return s /= size;
}

int main() {

	setlocale(LC_ALL, "russian");

	//вывод цифр п€тизначного числа
	int a;
	cout << "¬ведите число: ";
	cin >> a;
	int arr[5];
	for (int i = 0; i < 5; i++)
	{
		arr[i] = a % 10;
		a /= 10;
	}

	for (int i = 4; i >= 0; i--)
		cout << arr[i] << endl;




	//перевод буквы в верхний регистр
	char b;
	cout << "¬ведите букву: ";
	cin >> b;
	cout << char(toupper(b)) << endl;



	//среднее арифметическое у массива чисел
	int size;
	cout << "”кажите размер массива: ";
	cin >> size;
	int* arr2 = new int[size];
	for (int i = 0; i < size; i++)
		cin >> arr2[i];
	cout << "–езультат: " << func(arr2, size) << endl;



	return 0;
}