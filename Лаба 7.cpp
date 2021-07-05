#include <iostream>
using namespace std;

//������� �������� ��������������
double g(double a, double b) {
    return  2 / (1 / a + 1 / b);
}



void swapp(double* a, double* b, double* c) { // ������� ������ �������
	if ((*a) < (*b) && (*a) < (*c)) {
		if ((*b) > (*c)) {
			swap(*b, *c);
		}
	}
	else if ((*b) < (*c) && (*b) < (*a)) {
		if ((*a) > (*c)) {
			swap(*a, *c);
		}
	}
	else if ((*c) < (*b) && (*c) < (*a)) {
		if ((*b) > (*c)) {
			swap(*b, *a);
		}
	}
	swap(*a, *c);
}


int main() {
    setlocale(LC_ALL, "russian");


	//������ �������� ��������������
	cout << "������� �����(2): ";
	double a, b;
	cin >> a >> b;
	cout << "������� �������������: " << g(a, b) << endl;



	//������ ����� �������
	double t, d, n;
	cout << "������� �����(3): ";
	cin >> t >> d >> n;
	swapp(&t, &d, &n);
	cout << "���������: " << t << " " << d << " " << n << endl;


    return 0;
}