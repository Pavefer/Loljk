#include <iostream>
#include <cmath>


using namespace std;

int main() {
    setlocale(LC_ALL, "russian");


    //���� ����-�
    int a, b, c;
    cout << "������� ����������� ���������: ";
    cin >> a >> b >> c;

    
    int desc = b * b - 4 * a * c;

    //����������� ������
    if (desc > 0) 
        cout << "����� ���������: " << (-b + sqrt(desc)) / 2 * a << " " << (-b - sqrt(desc)) / 2 * a << endl;
    else if (desc == 0) 
        cout << "������ ����: " << (-b / (2 * a)) << endl;
    
    else 
        cout << "������ ���" << endl;
    






    //��������� �����
    int t, d;
    cout << "������� �����(2): ";
    cin >> t >> d;

    int random = t + rand() % (d - t + 1);
    cout << "��������� ��������: " << random << endl;





    //���������� �������
    int arr[10];
    cout << "��������� ������(10 ���������): ";
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

    cout << "������ ����� ����������: ";
    for (int i = 0; i < 10; i++) 
        cout << arr[i] << " ";
    

    return 0;
}