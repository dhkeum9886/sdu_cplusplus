#include <iostream>
using namespace std;

int add(int x, int y);

int main()
{
  int (*fp)(int x, int y); // �Լ� ������ ���� ����
  int a = 3, b =  7, dap;
  
  fp = add;       // �Լ����� �Լ� ������ ������ ����
  dap = fp(a, b);  // �Լ� ������ ������ �Լ��� ȣ��
  cout << "3 + 7 = " << dap << endl;
  
  system("PAUSE");  
  return 0;
}

int add(int x, int y)
{
  return x + y;
}
