#include <iostream>
using namespace std;



double func(int* arr, int size) {//����� �������� ��������������� ���������
	double s = 0;
	for (int i = 0; i < size; i++)
		s += arr[i];
	return s /= size;
}

int main() {

	setlocale(LC_ALL, "russian");

	//����� ���� ������������ �����
	int a;
	cout << "������� �����: ";
	cin >> a;
	int arr[5];
	for (int i = 0; i < 5; i++)
	{
		arr[i] = a % 10;
		a /= 10;
	}

	for (int i = 4; i >= 0; i--)
		cout << arr[i] << endl;




	//������� ����� � ������� �������
	char b;
	cout << "������� �����: ";
	cin >> b;
	cout << char(toupper(b)) << endl;



	//������� �������������� � ������� �����
	int size;
	cout << "������� ������ �������: ";
	cin >> size;
	int* arr2 = new int[size];
	for (int i = 0; i < size; i++)
		cin >> arr2[i];
	cout << "���������: " << func(arr2, size) << endl;



	return 0;
}