#include <iostream>
using namespace std;

extern void data(int x);
int x = 7;
int y;

int main()
{
  x = 9;
  cout << "main �Լ� ���� x = " << x << endl;
  
  data(100);
  cout << "�ܺ� ������ �Լ� ȣ�� �� y = " << y << endl; 
  system("PAUSE");  
  return 0;
}     

