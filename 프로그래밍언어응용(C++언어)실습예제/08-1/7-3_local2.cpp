#include <iostream>
using namespace std;

int main()
{
  int x;  // x�� �������� 
    
  for(x = 1; x < 5; x++) {
    int count = 0;   // count�� �������� 
    count++;
    cout << "x = " << x;
    cout << " count = " << count << endl;
  }
  cout << "for�� { } ���� x = " << x << endl;
  system("PAUSE");
  return 0;
}     
