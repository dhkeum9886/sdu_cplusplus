#include <iostream>
using namespace std;

int main()
{
  int x = 100; //���� x�� 100�� ����
  int *pt;     //������ ���� pt�� ������ int Ÿ���̶�� ����
  
  pt = &x;     //������ ���� pt�� ���� x�� �ּҰ��� �Ҵ�
  
  cout << "x�� �޸� ���� ����: " << pt << endl;
  cout << "pt�� �޸� ���� ����: " << &pt << endl;
  cout << "pt�� ����Ű�� �޸� ������ ����� ������: " << *pt << endl;
  system("PAUSE");
  return 0;
}
