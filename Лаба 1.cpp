#include <iostream>
#include <string>

using namespace std;



int main()
{
    setlocale(LC_ALL, "russian");



    int arr[10];
    cout << "��������� ������: "; // ���� �������
    for (int i = 0; i < 10; i++)
        cin >> arr[i];

    for (int i = 0; i < 10; i++) // �����
    {
        if (arr[i] % 2 != 0)
            arr[i] = 0;
        else cout << arr[i];
    }



    cout << endl;


    char a;
    cout << "������� ������: ";
    cin >> a;
    //�������� �� ������
    while (isdigit(a) || isalpha(a))
    {
        cout << "�� ����� ����� ��� �����, ������� ������: ";
        cin >> a;
    }
    string str;
    cout << "������� ������: ";
    cin >> str;

    //���� ������ ������ ��� �� ������
    if (str.find(a) != str.npos)
        cout << "������ ���������� �� " << str.find(a) + 1 << " ����� � ������";
    else
        cout << "������ �� ������!" << endl;


    cout << endl;


    int arr2[3][3];
    cout << "��������� �������(9 ���������): " << endl;

    for (int i = 0; i < 3; i++)//���� �������
    {
        for (int j = 0; j < 3; j++)
            cin >> arr2[i][j];

    }

    int b = arr2[0][0] * arr2[1][1] * arr2[2][2] + arr2[0][1] * arr2[1][2] * arr2[2][0] + arr2[0][2] * arr2[1][0] * arr2[2][1] -
        arr2[0][2] * arr2[1][1] * arr2[2][0] - arr2[0][1] * arr2[1][0] * arr2[2][2] - arr2[0][0] * arr2[1][2] * arr2[2][1];

    cout << "������������: " << b;//����� ����������



    return 0;
}