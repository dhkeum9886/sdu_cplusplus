#include <iostream>
using namespace std;

class Dog
{
 public:
  void DataShow();
  // ������� Age�� Weight�� ������ �����
  unsigned int Age;
  unsigned int Weight;
};

void Dog::DataShow()
{
  cout << "happy�� ���̴� " << Age << "�Դϴ�.\n";
  cout << "happy�� �����Դ� " << Weight << "�Դϴ�.\n";
}

int main()
{
  Dog happy = {3, 4};
  happy.DataShow();

  system("PAUSE");
  return 0; 
}
 
