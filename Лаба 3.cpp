#include <iostream>
#include <string>
using namespace std;



int main() {
    setlocale(LC_ALL, "russian");

    //���� ������� � ����� ������ ������������� �����
    int size;
    cout << "������� ������ �������: ";
    cin >> size;
    int* arr = new int[size];
    cout << "��������� ������: " << endl;
    for (int i = 0; i < size; i++) 
        cin >> arr[i];
    
 
    cout << "������ ������������� �����: " << endl;
    for (int i = 0; i < size; i++) 
        if (arr[i] >= 0)
            cout << arr[i] << " ";
    



    //���� ������ � �������� �� �������
    cout << endl;
    string str;
    cout << "������� ������: ";
    cin >> str;
    string check = "AEIOUaeiou";         

    cout << "�������: ";
    for (int i = 0; i < str.length(); i++) 
        if (check.find(str[i]) != check.npos) 
            cout << str[i] << " ";
        
    

    return 0;
}