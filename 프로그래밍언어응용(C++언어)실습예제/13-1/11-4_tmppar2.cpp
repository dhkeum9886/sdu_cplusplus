#include <iostream>
using namespace std;

template <class Type1, typename Type2>
void Show(Type1 x, Type2 y)
{
  cout << x << "    ";
  cout << y << endl;
}

int main()
{
  int i1 = 7, i2 = 9;
  double d1 = 3.5, d2 = 2.6;
  
  Show(i1, i2);   //i1 int Ÿ��, i2 int Ÿ�� 
  Show(i1, d1);   //i1 int Ÿ��, d1 double Ÿ�� 

  system("PAUSE");
  return 0;
}
