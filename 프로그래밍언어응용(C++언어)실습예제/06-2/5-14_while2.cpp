#include <iostream>        
using namespace std;     

int main()                   
{                                        
  int sum = 0;
  int x = 0;
    
  while(x <= 100) // x�� 100���� �۰ų� ������ {}���� �ݺ� ����
  {
      sum += x;
      x += 2;
  }
  cout << "2 + 4 + 6 + ... + 100 = " << sum << endl;
  
  system("PAUSE");  
  return  0;
}

