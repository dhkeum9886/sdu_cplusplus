#include <iostream>
using namespace std;

int main()
{
  char op;
  float num1, num2;  
  
  cout << "��Ģ���� ������ ������ ���� 3���� �׸����� �Է��ϼ���!\n";
  cout << "���1,���������(+,-,*,/)�� �ϳ�,���2�� �Է��ϼ���.\n";
  cin >> num1 >> op >> num2;
  if(op == '+')  cout << num1 + num2 << endl;
  else if(op == '-')  cout << num1 - num2 << endl; 
  else if(op == '*')  cout << num1 * num2 << endl;
  else if(op == '/')  cout << num1 / num2 << endl;
  else cout << "�߸� �Է��߽��ϴ�!\n"; 

  system("PAUSE");
  return 0;
}
