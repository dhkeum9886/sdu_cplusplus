#include <iostream>
using namespace std;

int main()
{
  int x;  // main()�Լ��� { }���ο��� ��ȿ�� �������� x 
  
  cout << "for�� ���ο����� x = ";
  for(x = 1; x < 5; x++) {
    int x = 0;    // for���� { }���ο��� ��ȿ�� �������� x 
    x++;
    cout << x << "  ";
  }
  cout << "\nfor�� { } ���� x = " << x << endl; 
  system("PAUSE");
  return 0;
}     
