#include <iostream>
using namespace std;

int main()
{
    char ch;
    cout << "���ڸ� �Է��ϼ��� : ";
    cin >> ch;
    // �� ������ �и��� ��� ������ ������ else ���� ������ �����ϰ�
    // if ~ else���� ���
    if(ch == 'A' || ch == 'a')
       cout << "A�̰ų� a\n"; 
    else if(ch == 'D' || ch == 'd')
       cout << "D�̰ų� d\n";
    else if(ch == 'Y' || ch == 'y')
       cout << "Y�̰ų� y\n";      

    system("PAUSE");
    return 0;
}
