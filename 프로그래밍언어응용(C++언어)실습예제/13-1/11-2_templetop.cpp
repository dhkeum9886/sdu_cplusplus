#include <iostream>
using namespace std;

// ���ø� ���� - ������ Ÿ���� ������ �ʰ� Type���� �Ϲ�ȭ�Ѵ�.
template <class Type>
// Type�� ȣ���� �Լ��� ���ڿ� �µ��� Ÿ���� �����Ѵ�.
Type add(Type x, Type y)
{
  return x + y;
}

int main()
{
  cout << add(5, 7) << endl;
  cout << add(2.5, 3.1) << endl;
  
  system("PAUSE");
  return 0;
}
  
