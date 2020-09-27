#include <iostream>
using namespace std;

class Dog
{
 public:
  Dog(unsigned int age, unsigned int weight);
  void SetData(unsigned int age, unsigned int weight);
  void GetData() const;  // const ����Լ��� ���� 
 private:
  unsigned int Age;
  unsigned int Weight;
};

Dog::Dog(unsigned int age, unsigned int weight)
{
  Age = age;
  Weight = weight;
}

void Dog::SetData(unsigned int age, unsigned int weight)
{
  Age = age;
  Weight = weight;
} 

void Dog::GetData() const  // const ����Լ� ����  
{
  cout << "���̴� " << Age << "�Դϴ�.\n";
  cout << "�����Դ� " << Weight << "�Դϴ�.\n";
}

int main()
{
  Dog happy(3, 4);
  const Dog marry(5, 7);

  happy.GetData(); 
  marry.SetData(8, 9);  // ����! - marry�� const ��ü 
  marry.GetData();

  system("PAUSE");
  return 0; 
}
