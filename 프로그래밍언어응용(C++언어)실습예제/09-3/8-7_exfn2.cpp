#include <iostream>
using namespace std;

void data();
extern void stdata(int x);

int x = 7;
int y = 100;

int main()
{
  x = 9;
  cout << "main �Լ� ���� x = " << x << "\n";
  data();
  cout << "�Լ� ȣ�� �� y = " << y << endl; 
  system("PAUSE");
  return 0;
}     

void data()
{
  cout << "ȣ��� �Լ��� y = " << y << endl;
  stdata(35);
}
 
