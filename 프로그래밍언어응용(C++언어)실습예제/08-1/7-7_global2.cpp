#include <iostream>
using namespace std;

void data();
void data2();

int main()
{
  int x = 0;  // �������� x ���� 
  cout << "main() �Լ� ���� �������� x = " << x << "\n";
  
  data();
  cout << "data() �Լ� ȣ�� �� �������� x = " << x << "\n\n";
  
  data2();
  cout << "data2() �Լ� ȣ�� �� �������� x = " << x << endl; 
  system("PAUSE");
  return 0;
}     

int x = 7;  // �������� x ���� 

void data() 
{
  cout << "ȣ��� data() �Լ��� �������� x = " << x << endl;
  x = 200;  // �������� x�� �� ���� 
}

void data2()
{
  cout << "ȣ��� data2() �Լ��� �������� x = " << x << endl;
  x = 600;   // �������� x�� �� ���� 
}
