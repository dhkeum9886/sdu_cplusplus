#include <iostream>
using namespace std;

void chonge(int *p);

int main()
{
  int x = 1004;
  
  chonge(&x);
  cout << "chonge() �Լ� ȣ�� �� ���� x�� �� : " << x << endl;
  system("PAUSE");  
  return 0;
}

void chonge(int *p)
{
  cout << "chonge() �Լ� : " << *p << endl;
  *p = 375;
}
