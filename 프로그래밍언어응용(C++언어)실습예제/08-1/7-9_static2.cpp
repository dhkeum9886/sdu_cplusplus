#include <iostream>
using namespace std;

void data();
static int x = 7;

int main()
{
  cout << "main �Լ� ���� x = " << x << "\n";
  data();
  cout << "�Լ� ȣ�� �� x = " << x << endl; 
  system("PAUSE");  
  return 0;
}     

void data()
{
  x = 100;
  cout << "ȣ��� data �Լ��� x = " << x << endl;
  x = 200;
}
 
