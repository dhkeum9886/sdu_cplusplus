#include <iostream>
using namespace std;

int main()
{
    char ch;
    
    cout << "���ڸ� �Է��ϼ��� : ";
    cin >> ch;         // Ű����κ��� �Է¹��� ���ڸ� ch�� ����
    
    if(ch >= 'A' && ch <='Z') // ch�� ����� ���ڰ��� A~Z�̸�
       cout << "�빮���Դϴ�." << endl; 

    system("PAUSE");
    return 0;
}
