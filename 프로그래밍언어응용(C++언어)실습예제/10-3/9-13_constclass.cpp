#include <iostream>
using namespace std;

class Dog
{
 public:
  unsigned int Age;
  unsigned int Weight;
  void DataShow();
};

void Dog::DataShow()
{
  cout << "���̴� " << Age << "�Դϴ�.\n";
  cout << "�����Դ� " << Weight << "�Դϴ�.\n";
}

int main()
{
  Dog happy;

  happy.Age = 3;
  happy.Weight = 4;
  happy.DataShow(); 

  system("PAUSE");
  return 0; 
}
