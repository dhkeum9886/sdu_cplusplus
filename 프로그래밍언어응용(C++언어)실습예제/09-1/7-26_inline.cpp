#include <iostream>
using namespace std;

inline int calc(int x){return 2 * x;}
// inline�Լ� - �Լ��� ���� ���� ���� �Լ��� �����Ѵ�. 

int main()
{
  int x = 5, y = 7;
  cout << "2 * " << x << " = " << calc(x) << endl;
  cout << "2 * " << y << " = " << calc(y) << endl;

  system("PAUSE"); 
  return 0;
}
