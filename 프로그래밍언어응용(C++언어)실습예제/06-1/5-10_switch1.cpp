#include <iostream>
using namespace std;

int main()
{
  int grade = 0;
  cout << "���� �Է� : "; 
  cin >> grade;  
  switch(grade / 10) {
    case 10:
    case 9:    // (grade / 10)�� ����� 10�̰ų� 9�̸�
      cout << "A �����Դϴ�.\n";
      break;   // switch���� ������ switch�� ���� �������� �̵� 
    case 8: 
      cout << "B �����Դϴ�.\n";
      break;
    case 7: 
      cout << "C �����Դϴ�.\n";
      break;
    case 6:
      cout << "D �����Դϴ�.\n";
      break;
    default:  // �� ������ 10, 9, 8, 7, 6�� �ƴ� ��� 
      cout << "F �����Դϴ�.\n";
      break;  // ������ ���ǿ��� break�� ���ʿ��ϳ� ����ص� ������ 
  }                                         

  system("PAUSE");
  return 0;
}
