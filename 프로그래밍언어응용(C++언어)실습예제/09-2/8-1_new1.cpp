#include <iostream>
using namespace std;

int main()
{
  int *pt = new int;
  cout << "pt �ּ�: " << pt << endl;
  cout << "pt �ּ�: " << static_cast<void *>(pt) << endl;
  // �޸𸮿� ���� �־��.
  *pt = 123;
  
  cout << *pt << endl;
  // ����� ���� �޸𸮸� �����Ѵ�.
  delete pt;
  
  system("PAUSE");
  return 0;  
}

