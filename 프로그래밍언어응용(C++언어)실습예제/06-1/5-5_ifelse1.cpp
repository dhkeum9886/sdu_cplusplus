#include <iostream>
using namespace std;

int main()
{
    char ch;
    cout << "���ڸ� �Է��ϼ��� : ";
    cin >> ch;
    if(ch >= 'A' && ch <= 'Z') // ch�� ���ڰ� A~Z�̸�
       cout << "�빮���Դϴ�." << endl;
    else                       // ch�� ���ڰ� A~Z�� �ƴϸ� 
       cout << "�ҹ����Դϴ�." << endl; 

    system("PAUSE");
    return 0;
}
