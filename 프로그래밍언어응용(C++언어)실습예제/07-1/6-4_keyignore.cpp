#include <iostream>
#include <string>
using namespace std;

int main()
{
    char cStyle[256];

    cout << "���ڿ��� �Է��ϼ���!\n";
    cin.get(cStyle, 256);  // �� ������ �а�  ���� ���ڴ� �Է� ��Ʈ���� �����.
    cout << cStyle << endl;
      
    cin.ignore(256, '\n'); // ���๮�� ���� ���� 
    cout << "���ڿ��� �Է��ϼ���!\n";
    cin.getline(cStyle, 256);
    cout << cStyle << endl; 
    
    system("PAUSE");   
    return 0;
}
