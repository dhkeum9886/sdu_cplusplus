#include <iostream>
using namespace std;

int x = 100;   // ���� ����
int main()
{
  int x = 10;  // ���� ����
  int y = 3;   // ���� ����

  cout << "���� ���� x = " << x << endl;
  cout << "���� ���� y = " << y << endl;
  cout << "���� ���� x = " << ::x << endl;
  x = y + ::x;
  cout << "���� ���� x = " << x << endl;
  system("PAUSE");
  return  0;
}

