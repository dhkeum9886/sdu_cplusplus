#include <iostream>
using namespace std;

class Dog;
class Cat
{
  public:
    Cat(int age, int weight) {Age = age; Weight = weight;};  // ������ 
    void dataShow(Dog &obj);
  private:
    unsigned int Age;
    unsigned int Weight;
};

class Dog
{
  public:
    Dog(int age, int weight) {Age = age; Weight = weight;};
    // Cat Ŭ������ �ִ� ��� �Լ��� ������� �����Ͽ� �̰����� ���
    friend void Cat::dataShow(Dog &obj);
  private:
    friend class Cat;
    unsigned int Age;
    unsigned int Weight;
};

void Cat::dataShow(Dog &obj)
{
  cout << "��  ��: " << obj.Age << endl;
  cout << "������: " << obj.Weight << endl;
}


int main()
{
  Dog happy = Dog(3, 4);
  Cat cat = Cat(5, 7);

  cat.dataShow(happy);

  system("PAUSE");
  return 0;
}
