#include <iostream>
#include <string>
using namespace std;



int main() {
    setlocale(LC_ALL, "russian");

    //ввод массива и вывод только положительных чисел
    int size;
    cout << "Введите размер массива: ";
    cin >> size;
    int* arr = new int[size];
    cout << "Заполните массив: " << endl;
    for (int i = 0; i < size; i++) 
        cin >> arr[i];
    
 
    cout << "Массив положительных чисел: " << endl;
    for (int i = 0; i < size; i++) 
        if (arr[i] >= 0)
            cout << arr[i] << " ";
    



    //ввод строки и проверка на гласные
    cout << endl;
    string str;
    cout << "Введите строку: ";
    cin >> str;
    string check = "AEIOUaeiou";         

    cout << "Гласные: ";
    for (int i = 0; i < str.length(); i++) 
        if (check.find(str[i]) != check.npos) 
            cout << str[i] << " ";
        
    

    return 0;
}