#include <iostream>
using namespace std;

int main()
{
  // �޸𸮸� �Ҵ��Ѵ�.
  int *pt = new int[10];
  *pt = 200;

  cout << "pt �ּ�: " << pt << endl;
  cout << "pt �ּ�: " << static_cast<void *>(pt) << endl;
  cout << "pt = " << *pt << endl;
  // �޸𸮸� �����Ѵ�.
  delete[] pt;
 
  system("PAUSE");
  return 0;  
}
