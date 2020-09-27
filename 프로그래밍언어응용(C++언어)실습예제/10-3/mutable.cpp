#include <iostream>
using namespace std;

class Dog
{
 public:
  Dog(unsigned int age, unsigned int weight);
  mutable unsigned int Age;
  mutable unsigned int Weight;
  void DataShow() const;
};

Dog::Dog(unsigned int age, unsigned int weight)
{
  Age = age;
  Weight = weight;
}

void Dog::DataShow() const
{
  cout << "���̴� " << Age << "�Դϴ�.\n";
  cout << "�����Դ� " << Weight << "�Դϴ�.\n";
}

int main()
{
  const Dog happy(3,4);  // const ��� ��ü 

  happy.Age = 5;  // ����! 
  happy.Weight = 6;   // ����! 

  happy.DataShow(); 

  system("PAUSE");
  return 0; 
}
