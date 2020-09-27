#include <iostream>
using namespace std;

class Dog
{
 public:
  void GetData() const;  // const ����Լ��� ���� 
  void SetData(unsigned int age, unsigned int weight);
 private:
  unsigned int Age;
  unsigned int Weight;
};

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
  Dog happy;

  happy.SetData(3,4);
  happy.GetData(); 

  system("PAUSE");
  return 0; 
}
