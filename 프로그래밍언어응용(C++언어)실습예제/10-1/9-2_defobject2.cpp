#include <iostream>
using namespace std;

class Dog
{
 public: 
  unsigned int GetAge(){return Age;};
  // ��� �Լ��� ����� ���Ǹ� �����Ѵ�. 
  void SetAge(unsigned int age){Age = age;};
  // ��� �Լ��� ����� ���Ǹ� �����Ѵ�. 
  void Show();
 private:
  unsigned int Age;
  unsigned int Weight;
};

void Dog::Show()
{
  cout << "�ູ�� ���� \n";
};

int main()
{
  Dog happy;
  happy.SetAge(3);
  cout << "happy�� ���̴� " << happy.GetAge() << "�Դϴ�.\n";

  system("PAUSE");
  return 0;
}   
