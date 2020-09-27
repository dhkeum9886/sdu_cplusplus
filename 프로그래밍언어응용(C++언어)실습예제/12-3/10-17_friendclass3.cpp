#include <iostream>
using namespace std;

class Dog;
class Cat
{
  public:
    Cat(int age, int weight) {Age = age; Weight = weight;};
    void dataShow(Dog &obj);
  private:
    unsigned int Age;
    unsigned int Weight;
    friend class Dog;
    // Dog Ŭ������ Cat�� �������̹Ƿ� Dog Ŭ������ ��� ��� �Լ����� 
    // Cat Ŭ������ private ��� ������ ������ �� �ִ�. 
};

class Dog
{
  public:
    Dog(int age, int weight) {Age = age; Weight = weight;};
    void dataShow(Cat &obj);
  private:
    unsigned int Age;
    unsigned int Weight;
};

void Dog::dataShow(Cat &obj)
{
  cout << "��  ��: " << obj.Age << endl;
  // Dog Ŭ������ ����Լ����� Cat Ŭ������ private ��������� ����
  cout << "������: " << obj.Weight << endl;
}

int main()
{
  Dog happy = Dog(3, 4);
  Cat cat = Cat(5, 7);

  happy.dataShow(cat);

  system("PAUSE");
  return 0;
}
