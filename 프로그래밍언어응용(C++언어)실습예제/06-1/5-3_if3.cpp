#include <iostream>
using namespace std;

int main()
{
    int x;
    
    cout << "������ �Է��ϼ��� : ";
    cin >> x;
    if(x < 100 && x > 0)   // x�� 100���� �۰� 0���� ũ��
       cout << "0 < x < 100 ������ ����" << endl; 

    system("PAUSE");
    return 0;
}
