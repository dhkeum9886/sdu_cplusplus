#include <iostream>        
using namespace std;
#include <iomanip>     

int main()                   
{                                        
  double d = 357.893;
  cout.setf(ios::fixed, ios::floatfield); //�ε� �Ҽ��� ǥ��
  cout.precision(3);  //�Ҽ��� ���� ��°�ڸ�, ���� �Ҽ��� ǥ��
  cout << d << endl;
  system("PAUSE");
  return  0;
}
