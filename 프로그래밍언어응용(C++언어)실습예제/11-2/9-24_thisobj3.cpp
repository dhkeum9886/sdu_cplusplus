#include <iostream>
using namespace std;

class Dog
{
  public:
    Dog(int age, int weight);
    Dog &setData();  // ����(&) Ÿ������ ��� �Լ��� ������ ����
    void showData();
  private:
    unsigned int Age;
    unsigned int Weight;
};

Dog::Dog(int Age, int Weight)
{
  this->Age = Age; // ������� this->Age�� �������� Age�� ����
  this->Weight = Weight;
}

Dog &Dog::setData() // ����(&) Ÿ������ ��� �Լ� ����
{
  Age = 7;
  Weight = 8;
  return *this;
}

void Dog::showData()
{
  cout << Age << endl;
  cout << Weight << endl;
}

int main()
{
  Dog happy = Dog(3, 4);
  happy.showData();
  
  happy.setData().showData(); // �ΰ���  ��� �Լ��� �����Ͽ� ȣ��
  
  system("PAUSE");
  return 0;
}
