#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "ru");

    int num, max_num = 0, count = 0;

    cout << "������� �����. ��� ���������� ������� 0: \n";
    cin >> num;

    while (num != 0) {
        cin >> num;
        
        count += 1;

        if (num == 0) {
            break;
        }

        if (num > max_num) {
            max_num = num;
        }
    }

    cout << "������������ �����: " << max_num << endl;
    cout << "���������� ��������� �����: " << count << endl;

    return 0;
}