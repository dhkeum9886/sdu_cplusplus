#include <iostream>
using namespace std;

int add(int x, int y); // �Լ��� ���� ����

int main()
{
  int a = 3, b = 7, dap;
  dap = add(a, b);     // �Լ� ȣ��, a�� b�� �� �μ�
  cout << "3 + 7 = " << dap << endl;
  
  system("PAUSE");
  return 0;
}

int add(int x, int y)  // �Լ� ����, x�� y�� �� �μ�
{
  int result;
  result = x + y;
  
  return result;
}

