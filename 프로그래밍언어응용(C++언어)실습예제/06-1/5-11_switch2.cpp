#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "1���� 9������ ���ڸ� �Է��ϰ� EnterŰ�� ��������: "; 
    cin >> number; 
    switch(number) {
       case 1:
       case 3:
       case 5:
       case 7:
       case 9:   // number�� 1 �Ǵ� 3, 5, 7, 9 ���
          cout << "Ȧ���Դϴ�.\n"; 
          break;
    case 2:
       case 4:
       case 6:
       case 8:   // number�� 2 �Ǵ� 4, 6, 8 �̶��
          cout << "¦���Դϴ�.\n";
          break;
    } 

    system("PAUSE");
    return 0;
}
