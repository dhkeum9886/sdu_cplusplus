#include <iostream>
using namespace std;

class Dog
{
 public:
  Dog();    // ������ 
  ~Dog();   // �Ҹ��� 
  void DataShow();
 private:
  unsigned int Age;
  unsigned int Weight;
};

Dog::Dog()  // �������� ����
{
  cout << "������ ȣ�� \n";
  Age = 3;
  Weight = 4;
}

Dog::~Dog()  // �Ҹ����� ���� 
{
  cout << "�Ҹ��ڰ� ȣ�� \n"; 
  system("PAUSE");
}

void Dog::DataShow()
{
  cout << "happy�� ���̴� " << Age << "�Դϴ�.\n";
  cout << "happy�� �����Դ� " << Weight << "�Դϴ�.\n";
}

int main()
{
  Dog happy;  // ��ü ����, ������ Dog()�� �ڵ����� ȣ��Ǿ� ����ȴ�. 

  happy.DataShow();

  // system("PAUSE");
  return 0;         // �Ҹ��� ~Dog()�� �ڵ����� ȣ��Ǿ� ����ȴ�. 
}
