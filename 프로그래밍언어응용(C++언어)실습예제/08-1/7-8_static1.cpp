#include <iostream>
using namespace std;

void data();
int x = 7;

int main()
{
  int x = 3;  // �������� x
  int y = 0;
  cout << "main �Լ� ���� x = " << x << "\n";
  
  data();
  cout << "�Լ� ȣ�� �� x = " << x << endl;
  cout << "�Լ� ȣ�� �� y = " << y << endl; 
  data();
  system("PAUSE");  
  return 0;
}     

void data()
{
  int y = 20;
  static int x = 10;
  
  cout << "ȣ��� data �Լ��� x = " << x << endl;
  cout << "ȣ��� data �Լ��� y = " << y << endl;
  
  x = 100;
  y = 200;
}
