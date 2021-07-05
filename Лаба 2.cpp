#include <iostream>
#include <cmath>


using namespace std;

int main() {
    setlocale(LC_ALL, "russian");


    //ввод коэф-в
    int a, b, c;
    cout << "Введите коэфициенты уравнения: ";
    cin >> a >> b >> c;

    
    int desc = b * b - 4 * a * c;

    //определение корней
    if (desc > 0) 
        cout << "Корни уравнения: " << (-b + sqrt(desc)) / 2 * a << " " << (-b - sqrt(desc)) / 2 * a << endl;
    else if (desc == 0) 
        cout << "Корень один: " << (-b / (2 * a)) << endl;
    
    else 
        cout << "Корней нет" << endl;
    






    //случайное число
    int t, d;
    cout << "Введите числа(2): ";
    cin >> t >> d;

    int random = t + rand() % (d - t + 1);
    cout << "Случайный результа: " << random << endl;





    //сортировка массива
    int arr[10];
    cout << "Заполните массив(10 элементов): ";
    for (int i = 0; i < 10; i++) 
        cin >> arr[i];

    int temp;
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 10 - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = t;
            }
        }
    }

    cout << "Массив после сортировки: ";
    for (int i = 0; i < 10; i++) 
        cout << arr[i] << " ";
    

    return 0;
}