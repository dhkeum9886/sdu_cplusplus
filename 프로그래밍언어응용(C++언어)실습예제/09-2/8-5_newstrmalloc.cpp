#include <iostream>
#include <cstring>
#include <stdlib.h>
using namespace std;

int main()
{
  string cppStyle;
  char *cStyle[2];
  char temp[256];
  
  cout << "���ڿ��� �Է��ϼ���!\n";
  cin.getline(temp, 256);
  cStyle[0] = (char *)malloc(strlen(temp) + 1); // �޸� �Ҵ�
  strcpy(cStyle[0], temp);
  cout << cStyle[0] << endl;
  free(cStyle[0]);  // �Ҵ���� �޸𸮸� �����Ͽ� ��ȯ�Ѵ�.
  
  cout << "���ڿ��� �Է��ϼ���!\n";
  getline(cin, cppStyle);
  cout << cppStyle << endl;
  
  // ���� �Ҵ�� �޸𸮿� ������ ������ �迭
  long *pt = new long [10];
  *pt = 135792468;
  cout << "pt �ּ�: " << pt << endl;
  cout << "pt = " << *pt << endl;
  
  // �޸𸮸� �����Ѵ�.
  delete[] pt;
  pt = NULL;
  
  // pt�� ������ �ּҰ��� Ȯ���Ѵ�.
  cout << "pt = " << pt << "\n";
  
  // �޸𸮸� �����Ѵ�.
  delete[] pt;
  pt = NULL;
  
  system("PAUSE");
  return 0;  
}
