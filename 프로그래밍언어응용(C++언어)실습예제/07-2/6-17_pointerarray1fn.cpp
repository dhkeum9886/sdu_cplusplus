#include <iostream>
using namespace std;

void chonge(int *p);

int main()
{
  int a[] = {4, 5, 6};
  
  chonge(a);

  system("PAUSE");  
  return 0;
}

void chonge(int *p)
{
  cout << "chonge() �Լ� : " << *p << endl;
  for(int i = 0; i < 3; i++)
  {
    cout << "p+ " << i << " ���� = " << p+i << "   ";
    cout << "p[" << i << "] = " << p[i] << endl; 
  }
}
