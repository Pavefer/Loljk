#include <iostream>
#include <string>

using namespace std;



int main()
{
    setlocale(LC_ALL, "russian");



    int arr[10];
    cout << "Заполните массив: "; // ввод массива
    for (int i = 0; i < 10; i++)
        cin >> arr[i];

    for (int i = 0; i < 10; i++) // вывод
    {
        if (arr[i] % 2 != 0)
            arr[i] = 0;
        else cout << arr[i];
    }



    cout << endl;


    char a;
    cout << "Введите символ: ";
    cin >> a;
    //проверка на символ
    while (isdigit(a) || isalpha(a))
    {
        cout << "Вы ввели цифру или букву, введите символ: ";
        cin >> a;
    }
    string str;
    cout << "Введите строку: ";
    cin >> str;

    //если символ найден или не найден
    if (str.find(a) != str.npos)
        cout << "Символ расположен на " << str.find(a) + 1 << " месте в строке";
    else
        cout << "Символ не найден!" << endl;


    cout << endl;


    int arr2[3][3];
    cout << "Заполните матрицу(9 элементов): " << endl;

    for (int i = 0; i < 3; i++)//ввод матрицы
    {
        for (int j = 0; j < 3; j++)
            cin >> arr2[i][j];

    }

    int b = arr2[0][0] * arr2[1][1] * arr2[2][2] + arr2[0][1] * arr2[1][2] * arr2[2][0] + arr2[0][2] * arr2[1][0] * arr2[2][1] -
        arr2[0][2] * arr2[1][1] * arr2[2][0] - arr2[0][1] * arr2[1][0] * arr2[2][2] - arr2[0][0] * arr2[1][2] * arr2[2][1];

    cout << "Определитель: " << b;//вывод результата



    return 0;
}