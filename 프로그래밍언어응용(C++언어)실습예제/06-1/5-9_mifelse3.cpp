#include <iostream>
using namespace std;

int main()
{
    int grade = 0;   // ��������
    
    cout << "���� �Է�(100�� ���� ����): ";
    cin >> grade;    // �����Է�
    if(grade >= 90) cout << "A�����Դϴ�.\n";
    else if(grade >= 80) cout << "B�����Դϴ�.\n";
    else if(grade >= 70) cout << "C�����Դϴ�.\n";
    else if(grade >= 60) cout << "D�����Դϴ�.\n";
    else cout << "F�����Դϴ�.\n";

    system("PAUSE");
    return 0;
}
