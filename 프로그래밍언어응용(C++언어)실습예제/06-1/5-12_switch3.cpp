#include <iostream>
using namespace std;

int main()
{
    char ch;
    
    cout << "���ڸ� �Է��ϰ� EnterŰ�� ��������: ";  
    cin >> ch; 
    switch(toupper(ch)) // ch�� ���ڸ� �빮�ڷ� ��ȯ�� ���ڰ�
    {
       case 'A':        // A �����̸�
          cout << "A\n";
          break;
       case 'E':        // E �����̸�
          cout << "E\n";
          break;
       case 'I':        // I �����̸�
          cout << "I\n";
          break;
       case 'O':        // O �����̸�
          cout << "O\n";
          break;
       case 'U':        // U �����̸�
          cout << "U\n";
          break;
       default:    // �� ����(A, E, I, O, U) �̿��� ���ڶ��    
          cout << "�����Դϴ�.\n";
          break;
    }                                

    system("PAUSE");
    return 0;
}
