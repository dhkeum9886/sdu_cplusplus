#include <iostream>
using namespace std;

template <class T>
T square(T x);

int main()
{
  int ir = square(8);  // T Ÿ���� int�� ����Ǹ鼭 square�Լ��� ����
  double dr = square(6.5);  // T Ÿ���� double�� ����Ǹ鼭 square�Լ��� ����

  cout << "squre(8) = " << ir << endl;
  cout << "squre(6.5) = " << dr << endl;

  system("PAUSE"); 
  return 0;
}

template <class T>  // ���� Ÿ�� x
// �Լ��� �տ��� ���ø��� �����ϰ�, ������ Ÿ���� T�� �Ϲ�ȭ�Ѵ�.
T square(T x)
{
  return x * x;
}
