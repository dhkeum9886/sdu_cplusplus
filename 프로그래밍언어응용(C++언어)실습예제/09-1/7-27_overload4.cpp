#include <iostream>
using namespace std;

int square(int x);
double square(double d); 

int main()
{
  int ir = square(8);      // square(int x) ȣ��
  double dr = square(6.5); // square(double d) ȣ��
  
  cout << "squre(8) = " << ir << endl;
  cout << "squre(6.5) = " << dr << endl;

  system("PAUSE"); 
  return 0;
}

int square(int x)  // ���� Ÿ�� x
{
  return x * x;
}

double square(double d) // ������ �Ǽ� Ÿ�� d
{
  return d * d;
}

