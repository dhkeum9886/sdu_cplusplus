#include <iostream>
using namespace std;

class Dog
{
 public:      // ���� ���� 
  Dog();
  void DataShow();
 private:     // ����� ���� 
  unsigned int Age;
  unsigned int Weight;
};

Dog::Dog()    // ������ ����
{
  Age = 3;    // ������� �ʱ�ȭ 
  Weight = 4; // ������� �ʱ�ȭ 
} 

void Dog::DataShow()
{
  cout << "happy�� ���̴� " << Age << "�Դϴ�.\n";
  cout << "happy�� �����Դ� " << Weight << "�Դϴ�.\n";
}

int main()
{
  Dog happy;

  happy.DataShow();

  system("PAUSE");
  return 0; 
}
