#include <iostream>
using namespace std;

//функция среднего гармонического
double g(double a, double b) {
    return  2 / (1 / a + 1 / b);
}



void swapp(double* a, double* b, double* c) { // функция замены местами
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


	//расчет среднего гармонического
	cout << "Введите числа(2): ";
	double a, b;
	cin >> a >> b;
	cout << "Среднее гармоническое: " << g(a, b) << endl;



	//замена чисел местами
	double t, d, n;
	cout << "Введите числа(3): ";
	cin >> t >> d >> n;
	swapp(&t, &d, &n);
	cout << "Результат: " << t << " " << d << " " << n << endl;


    return 0;
}